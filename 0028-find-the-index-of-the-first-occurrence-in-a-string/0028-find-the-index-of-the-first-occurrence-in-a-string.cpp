class Solution {
public:
    int strStr(string haystack, string needle) {
        // haystack.find(needle) searches for the needle and returns its starting index
        size_t pos = haystack.find(needle);
        
        // If found, return the index; otherwise, return -1
        if (pos != string::npos) {
            return pos;
        }
        return -1;
    }
};