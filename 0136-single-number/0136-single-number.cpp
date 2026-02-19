class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans =0;
        for(int i : nums){
            ans ^=i;
            
        }
        cout<<" "<<ans<<endl;
        return ans;
        
    }
};