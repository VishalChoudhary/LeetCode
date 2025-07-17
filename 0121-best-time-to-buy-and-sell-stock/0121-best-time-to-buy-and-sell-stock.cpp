class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP=0;
        int n=prices.size();
        int minP=prices[0];
        int profit=0;
        for(int i=1;i<n;i++){
            profit=prices[i]-minP;
            maxP=max(profit,maxP);
            minP=min(minP,prices[i]);   
        }
        return maxP;
    }
};