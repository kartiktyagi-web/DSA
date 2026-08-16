class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (sum == target) {
                return {left + 1, right + 1}; // 1-indexed output
            } 
            else if (sum < target) {
                left++; // We need a larger sum, move the left pointer forward
            } 
            else {
                right--; // We need a smaller sum, move the right pointer backward
            }
        }
        return {};
    }
};