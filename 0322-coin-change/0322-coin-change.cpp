class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        if(amount==0)
        return 0;
        int res=0;
        vector<int> ans;
        for(int i=n-1;i>=0;i--){
            while(amount>=coins[i]){
                amount-=coins[i];
                res++;
                ans.push_back(coins[i]);
            }
        }
        if(ans.size()==1)
        return -1;
        else
        return res;
    }
};