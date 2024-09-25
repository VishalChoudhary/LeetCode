class Solution {
public:
    
    int dpClimb(int n,vector<int> &dp){
        if(n==0 or n==1)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        return dp[n]=dpClimb(n-1,dp)+dpClimb(n-2,dp);
    }
    
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return dpClimb(n,dp);
    }
};