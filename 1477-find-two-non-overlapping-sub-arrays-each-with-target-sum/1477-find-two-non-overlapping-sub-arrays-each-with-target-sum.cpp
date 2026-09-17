class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> best(n, INT_MAX);   // best[i] = min length of a valid subarray ending at or before i
        int left = 0, sum = 0;
        int minLen = INT_MAX;
        int res = INT_MAX;

        for (int right = 0; right < n; right++) {
            sum += arr[right];
            while (sum > target) {
                sum -= arr[left];
                left++;
            }
            if (sum == target) {
                int currLen = right - left + 1;
                if (left > 0 && best[left - 1] != INT_MAX) {
                    res = min(res, best[left - 1] + currLen);
                }
                minLen = min(minLen, currLen);
            }
            best[right] = minLen;
        }

        return res == INT_MAX ? -1 : res;
    }
};