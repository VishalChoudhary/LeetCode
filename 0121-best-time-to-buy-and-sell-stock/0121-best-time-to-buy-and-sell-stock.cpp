class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPrice = 0;
        int minPrice = prices[0];
        int cost=0;
        int n=prices.size();
        for(int i=1;i<n;i++){
            cost=prices[i]-minPrice;
            maxPrice=max(maxPrice,cost);
            minPrice=min(minPrice,prices[i]);
        }
        return maxPrice;
    }
};