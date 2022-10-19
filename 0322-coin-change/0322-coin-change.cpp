class Solution {
public:
    int solve(vector<int> &coins,int x,vector<int> &dp){
        if(x==0)
            return 0;
        if(x<0)
            return INT_MAX;
        
        if(dp[x]!=-1)
            return dp[x];
        int mini=INT_MAX;
        for(int i=0;i<coins.size();i++){
            int ans=solve(coins,x-coins[i],dp);
            if(ans!=INT_MAX)
                mini=min(mini,1+ans);
        }
        dp[x]=mini;
        return dp[x];
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<int> dp(amount+1,-1);
        int res=solve(coins,amount,dp);
        if(res==INT_MAX)
            return -1;
        return res;
    }
};