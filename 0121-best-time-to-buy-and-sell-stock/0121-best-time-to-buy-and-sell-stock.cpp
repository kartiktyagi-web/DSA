class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy = prices[0]; // this is the first element of the  given array which further is used to get compare with others
        int maxprofit = 0 ;

        for(int i = 1;i<prices.size();i++){
            if(prices[i]>bestbuy){
                maxprofit = max(maxprofit , prices[i]-bestbuy );
            }
            bestbuy = min(bestbuy, prices[i]);
        }
        return maxprofit;
    }
};