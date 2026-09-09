class Solution {
public:
    long long countCommas(long long n) {
        long long total = 0;
        long long base = 1000;
        
        while (n >= base) {
            total += (n - base + 1);
            base *= 1000;
        }
        
        return total;
    }
};