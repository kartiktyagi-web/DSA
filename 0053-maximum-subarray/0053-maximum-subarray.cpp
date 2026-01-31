class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum =0,maxsum=INT_MIN,n=nums.size();
        for(int i=0;i<n;i++){
            currsum+=nums[i];
            maxsum=max(currsum,maxsum);
            if(currsum<0){
                currsum=0;
            }
        }
        return maxsum;
    }
  
};