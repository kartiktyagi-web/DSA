class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int drops = 0;

        for (int i = 0; i < n; i++) {
            // Compare each element with the next (wrap around using %)
            if (nums[i] > nums[(i + 1) % n]) {
                drops++;
            }
            // More than 1 drop → not a valid rotated sorted array
            if (drops > 1) return false;
        }

        return true;
    }
};