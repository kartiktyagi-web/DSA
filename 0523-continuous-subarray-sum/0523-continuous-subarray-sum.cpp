class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> remainderMap;
        remainderMap[0] = -1; // Base case for subarrays starting at index 0
        
        int currentSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];
            int remainder = currentSum % k;
            
            if (remainderMap.find(remainder) != remainderMap.end()) {
                // Check if the subarray length is at least 2
                if (i - remainderMap[remainder] >= 2) {
                    return true;
                }
            } else {
                // Store the first time we see this remainder to maximize length
                remainderMap[remainder] = i;
            }
        }
        return false;
    }
};