class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> charIndex(256, -1);
        int left = 0;
        int maxLength = 0;
        
        for (int right = 0; right < s.length(); right++) {
            char currentChar = s[right];
            
            if (charIndex[currentChar] >= left) {
                left = charIndex[currentChar] + 1;
            }
            
            charIndex[currentChar] = right;
            maxLength = max(maxLength, right - left + 1);
        }
        
        return maxLength;
    }
};