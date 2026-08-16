class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        
        // Outer loop for the starting point of the subarray
        for (int i = 0; i < n; i++) {
            int sum = 0;
            // Inner loop for the ending point of the subarray
            for (int j = i; j < n; j++) {
                sum += nums[j];
                if (sum == k) {
                    count++;
                }
            }
        } 
        
        return count;
    }
};