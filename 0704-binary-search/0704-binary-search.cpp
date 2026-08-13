class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1; // 1. Fixed 'end' to point to the last valid index
        
        while (st <= end) {                // 2. Used <= to check the single-element boundary
            int mid = st + (end - st) / 2; // Prevents potential integer overflow
            
            if (nums[mid] == target) {
                return mid; 
            }
            else if (nums[mid] > target) {
                end = mid - 1;             // 3. Target is smaller, look in the left half
            }
            else {
                st = mid + 1;              // 4. Target is larger, look in the right half
            }
        }
        
        return -1; // 5. Target not found after checking all elements
    }
};