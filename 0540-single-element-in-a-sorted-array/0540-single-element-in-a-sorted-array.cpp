class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st = 0, end = nums.size() - 1;
        while (st < end) {
            int mid = st + (end - st) / 2;
            // Ensure mid is even for consistent pair comparison
            if (mid % 2 == 1) mid--;
            if (nums[mid] == nums[mid + 1])
                st = mid + 2;  // pair is intact, unique is to the right
            else
                end = mid;     // pair is broken, unique is here or to the left
        }
        return nums[st];
    }
};