class Solution {
public:
    bool isPalindrome(int x) {
        if (x< 0){return false;}
        int k ;
        long long sum =0  ;
        int temp = x;
        while ( temp > 0 ){
            k = temp % 10 ;
            sum = (sum *10) + k;
            temp = temp /10;
        }
        if ( sum  == x ){
            return true;
        }else{
            return false;
        }
      
    }
};