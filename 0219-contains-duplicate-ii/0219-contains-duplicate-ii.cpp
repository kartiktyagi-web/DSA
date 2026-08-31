class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> indexMap; // stores {number, last_seen_index}
        
        for (int i = 0; i < nums.size(); i++) {
            // If the number exists in the map and the index difference is <= k
            if (indexMap.count(nums[i]) && (i - indexMap[nums[i]] <= k)) {
                return true;
            }
            // Update the map with the current index of the number
            indexMap[nums[i]] = i;
        }
        
        return false;
    }
};