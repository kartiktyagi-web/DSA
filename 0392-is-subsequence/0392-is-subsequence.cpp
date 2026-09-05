class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++; // Move pointer for s only when characters match
            }
            j++;     // Always move pointer for t
        }
        return i == s.length(); // If we matched all characters in s, return true
    }
};