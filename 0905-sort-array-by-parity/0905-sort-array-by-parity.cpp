class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0, right = n - 1;
        
        for (int i = 0; i < n; i++) {
            if (nums[i] % 2 == 0) {
                result[left++] = nums[i]; // Put evens at the beginning
            } else {
                result[right--] = nums[i]; // Put odds at the end
            }
        }
        return result;
    }
};