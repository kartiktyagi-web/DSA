#include <string>
#include <vector>

class Solution {
public:
    std::string getPermutation(int n, int k) {
        int fact = 1;
        std::vector<int> numbers;
        
        // Precompute (n-1)! and populate number list [1, 2, ..., n]
        for (int i = 1; i < n; ++i) {
            fact *= i;
            numbers.push_back(i);
        }
        numbers.push_back(n);
        
        // Convert k to 0-based index
        --k;
        
        std::string result = "";
        
        while (true) {
            // Determine index of current digit
            int idx = k / fact;
            result += std::to_string(numbers[idx]);
            numbers.erase(numbers.begin() + idx);
            
            if (numbers.empty()) break;
            
            k %= fact;
            fact /= numbers.size(); // (n - 1)! for the next step
        }
        
        return result;
    }
};