class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxProfit=0;
        int minPrice=prices[0];
        int cost=0;
        for(int i=1;i<n;i++){
            cost=prices[i]-minPrice;
            maxProfit=max(maxProfit,cost);
            minPrice=min(minPrice,prices[i]);
        }
        return maxProfit;
    }
};