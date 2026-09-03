class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);
        
        int evenCount = 0;
        int oddCount = 0;
        
        // Traverse backwards from right to left
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] % 2 == 0) {
                // If current is even, its opposite parity count is the number of odds to its right
                answer[i] = oddCount;
                evenCount++; // Add current to the even count for elements further left
            } else {
                // If current is odd, its opposite parity count is the number of evens to its right
                answer[i] = evenCount;
                oddCount++; // Add current to the odd count for elements further left
            }
        }
        
        return answer;
    }
};