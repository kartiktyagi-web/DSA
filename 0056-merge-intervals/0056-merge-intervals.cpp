class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};

        // Sort intervals based on the starting time
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;
        for (const auto& interval : intervals) {
            // If the merged list is empty or current interval does not overlap, append it
            if (merged.empty() || merged.back()[1] < interval[0]) {
                merged.push_back(interval);
            } else {
                // Otherwise, there is an overlap, so merge by updating the end time
                merged.back()[1] = max(merged.back()[1], interval[1]);
            }
        }

        return merged;
    }
};