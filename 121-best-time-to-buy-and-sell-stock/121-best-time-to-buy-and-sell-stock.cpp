class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minR=INT_MAX;
        int profit=0,netP=0;
        int n=prices.size();
        for(int i=0;i<n;i++){
            if(prices[i]<minR){
                minR=prices[i];
            }
            profit=prices[i]-minR;
            if(profit>netP){
                netP=profit;
            }
        }
        return netP;
    }
};