class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // Handle cases where k >= n

        reverse(nums.begin(), nums.end());        // Step 1: Reverse entire array
        reverse(nums.begin(), nums.begin() + k);  // Step 2: Reverse first k elements
        reverse(nums.begin() + k, nums.end());    // Step 3: Reverse remaining elements
    }
};