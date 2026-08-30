class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int duplicate = -1 , missing = -1;
        vector<int> count(n+1 , 0);
        for(int num :nums){
                count[num]++;
        }
        for(int i = 1;i<=n;i++){
            if(count[i] == 2){
                duplicate = i ;
            }
            else if(count[i] == 0){
                missing = i;
            }
        }
        return {duplicate, missing};
    }
};