class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int closest = nums[0] + nums[1] + nums[2]; // initial guess

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1, right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                // Update closest if current sum is nearer to target
                if (abs(sum - target) < abs(closest - target))
                    closest = sum;

                if (sum < target)
                    left++;        // Need a larger sum → move left pointer right
                else if (sum > target)
                    right--;       // Need a smaller sum → move right pointer left
                else
                    return sum;    // Exact match found
            }
        }

        return closest;
    }
};