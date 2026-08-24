class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty()){return 0 ;}\
        int maxmulti= nums[0];
        int currmin = nums[0];
        int currmax = nums[0];

        for(int i = 1;i<nums.size();i++){
            int val = nums[i];
            
            if(val<0 ){
                swap(currmax,currmin);
            }
            currmax = max(val,currmax*val);
            currmin = min(val,currmin*val);
            

            maxmulti = max(maxmulti,currmax);
        }
        return maxmulti;
    }
};