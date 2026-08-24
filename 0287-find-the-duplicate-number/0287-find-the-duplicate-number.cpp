class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int l = 1, r = n;
        while(l<r){
             int mid = (l+r)/2;
        int count = 0 ;
        for(int num : nums){
            
            if(num<= mid){
                count++;
            }
        }
            if(count>mid){
                r = mid;
            }
            else{
                l=mid+1;
            }
        }
        
        return l;
    }
};