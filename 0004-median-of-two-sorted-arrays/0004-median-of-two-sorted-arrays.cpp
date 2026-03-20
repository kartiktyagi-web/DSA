class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        // Always binary search on the smaller array
        if (nums1.size() > nums2.size())
            swap(nums1, nums2);

        int m = nums1.size(), n = nums2.size();
        int half = (m + n) / 2;
        int lo = 0, hi = m;

        while (lo <= hi) {
            int mid1 = (lo + hi) / 2;
            int mid2 = half - mid1;

            int l1 = (mid1 > 0) ? nums1[mid1 - 1] : INT_MIN;
            int r1 = (mid1 < m) ? nums1[mid1]     : INT_MAX;
            int l2 = (mid2 > 0) ? nums2[mid2 - 1] : INT_MIN;
            int r2 = (mid2 < n) ? nums2[mid2]      : INT_MAX;

            if (l1 <= r2 && l2 <= r1) {
                if ((m + n) % 2 == 1)
                    return min(r1, r2);
                return (max(l1, l2) + min(r1, r2)) / 2.0;
            } else if (l1 > r2) {
                hi = mid1 - 1;
            } else {
                lo = mid1 + 1;
            }
        }

        return 0.0;
    }
};