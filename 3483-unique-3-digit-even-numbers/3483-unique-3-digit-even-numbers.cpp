class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> count(10, 0);
        for (int d : digits) {
            count[d]++;
        }
        
        int ans = 0;
        
        // Check all 3-digit even numbers
        for (int num = 100; num <= 998; num += 2) {
            int d1 = num / 100;         // Hundreds place
            int d2 = (num / 10) % 10;   // Tens place
            int d3 = num % 10;          // Units place
            
            vector<int> req(10, 0);
            req[d1]++;
            req[d2]++;
            req[d3]++;
            
            bool possible = true;
            for (int i = 0; i < 10; ++i) {
                if (req[i] > count[i]) {
                    possible = false;
                    break;
                }
            }
            
            if (possible) {
                ans++;
            }
        }
        
        return ans;
    }
};