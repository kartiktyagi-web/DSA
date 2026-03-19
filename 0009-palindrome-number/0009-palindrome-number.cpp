class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (except 0) are never palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversed_half = 0;
        while (x > reversed_half) {
            reversed_half = reversed_half * 10 + x % 10;
            x /= 10;
        }

        // Even-length: x == reversed_half (e.g. 1221)
        // Odd-length:  x == reversed_half / 10 (e.g. 121, discard middle digit)
        return x == reversed_half || x == reversed_half / 10;
    }
};