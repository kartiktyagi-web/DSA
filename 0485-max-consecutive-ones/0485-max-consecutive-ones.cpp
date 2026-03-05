class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();int f=0;int maxnums=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                f++;
                }
                else{
                    f=0;
                }
            maxnums=max(f,maxnums);
        }
        return maxnums;
    }
};