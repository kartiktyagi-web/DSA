class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(nums.empty()){return 0;}
        sort(nums.begin(),nums.end());
        int largeststreak=1,currentstreak=1;
        for(int i = 1;i<n;i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i]==nums[i-1]+1){
                currentstreak++;
            }else{
                currentstreak=1;
            }
            largeststreak=max(largeststreak,currentstreak);
        
        
        }
        return largeststreak;
    }
};