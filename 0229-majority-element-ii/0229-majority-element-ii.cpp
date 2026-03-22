class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int c1 = 0, c2 = 1, f1 = 0, f2 = 0;

        // Phase 1: Find candidates
        for (int num : nums) {
            if      (num == c1) f1++;
            else if (num == c2) f2++;
            else if (f1 == 0)   c1 = num, f1 = 1;
            else if (f2 == 0)   c2 = num, f2 = 1;
            else                f1--, f2--;
        }

        // Phase 2: Verify
        f1 = f2 = 0;
        for (int num : nums) {
            if      (num == c1) f1++;
            else if (num == c2) f2++;
        }

        vector<int> res;
        if (f1 > n / 3) res.push_back(c1);
        if (f2 > n / 3) res.push_back(c2);
        return res;
    }
};