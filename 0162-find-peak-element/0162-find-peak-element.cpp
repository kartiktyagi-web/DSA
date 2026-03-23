class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();

        // Handle edge cases first
        if (n == 1) return 0;
        if (nums[0] > nums[1]) return 0;
        if (nums[n-1] > nums[n-2]) return n-1;

        int st = 1, end = n - 2;  // Now safe to check mid-1 and mid+1

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (nums[mid] > nums[mid-1] && nums[mid] > nums[mid+1])
                return mid;  // Found peak
            else if (nums[mid-1] < nums[mid])
                st = mid + 1;  // Ascending → go right
            else
                end = mid - 1; // Descending → go left
        }

        return -1;
    }
};