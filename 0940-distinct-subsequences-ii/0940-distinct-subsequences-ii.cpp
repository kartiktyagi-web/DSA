class Solution {
public:
    int distinctSubseqII(string s) {
        int MOD = 1e9 + 7;
        vector<long> last(26, 0);

        for (char c : s) {
            long sum = 0;
            for (int count : last) {
                sum = (sum + count) % MOD;
            }
            // 1 accounts for the single-character subsequence "c"
            last[c - 'a'] = (sum + 1) % MOD;
        }

        long ans = 0;
        for (int count : last) {
            ans = (ans + count) % MOD;
        }

        return ans;
    }
};