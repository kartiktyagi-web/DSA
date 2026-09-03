class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = n-1,right = 0;
        for(int i =0 ;i<n;i++){
            if(nums[i]%2 == 0){
                result[left--] = 0 ;
            }
            else{
                result[right++] = 1;
            }
        }
        sort(result.begin(),result.end());
        return result ;
    }
};