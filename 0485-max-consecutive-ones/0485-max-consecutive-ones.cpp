class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int f = 0 , maxnum = 0 ;
        for(int i = 0 ;i< n ;i++){
            if(nums[i] == 1){
                f++;
            }
            else{
                f = 0 ;
            }
            maxnum = max(maxnum , f);
        }
        return maxnum ;
    }
};