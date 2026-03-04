

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0, right = static_cast<int>(nums.size()) - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;  // Avoids integer overflow

            if (nums[mid] == target)
                return true;

            // ⚠️ Duplicates edge case: can't determine which half is sorted
            if (nums[left] == nums[mid] && nums[mid] == nums[right]) {
                ++left;
                --right;
            }
            // Left half is cleanly sorted
            else if (nums[left] <= nums[mid]) {
                if (nums[left] <= target && target < nums[mid])
                    right = mid - 1;  // Target in left half
                else
                    left = mid + 1;   // Target in right half
            }
            // Right half is cleanly sorted
            else {
                if (nums[mid] < target && target <= nums[right])
                    left = mid + 1;   // Target in right half
                else
                    right = mid - 1;  // Target in left half
            }
        }

        return false;
    }
};