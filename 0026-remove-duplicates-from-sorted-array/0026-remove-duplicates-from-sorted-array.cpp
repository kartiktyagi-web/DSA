class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

        int insertPos = 1; // Points to where the next unique element goes

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) { // Found a new unique element
                nums[insertPos] = nums[i]; // Place it at insertPos
                insertPos++;
            }
        }

        return insertPos; // Number of unique elements
    }
};