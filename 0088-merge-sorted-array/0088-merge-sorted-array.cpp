class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1;       // nums1 ke aakhri valid element ka index
        int p2 = n - 1;       // nums2 ke aakhri element ka index
        int p = m + n - 1;    // nums1 ke bilkul aakhri empty spot ka index
        
        // Dono arrays ko piche se compare karte hue merge karo
        while (p1 >= 0 && p2 >= 0) {
            if (nums1[p1] > nums2[p2]) {
                nums1[p] = nums1[p1]; // Agar nums1 bada hai, toh use piche daal do
                p1--;
            } else {
                nums1[p] = nums2[p2]; // Agar nums2 bada ya barabar hai, toh use daal do
                p2--;
            }
            p--; // Pointers ko peeche khiskao
        }
        
        // Agar nums2 me kuch elements bach gaye hon, toh unhe copy kar do
        while (p2 >= 0) {
            nums1[p] = nums2[p2];
            p2--;
            p--;
        }
    }
};