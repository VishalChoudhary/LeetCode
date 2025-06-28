class Solution {
public:
    int fib(int n, vector<int> &dp){
        if(n<=1)
        return n;
        if(dp[n]!=-1)
        return dp[n];
        return dp[n]=fib(n-1,dp)+fib(n-2,dp);
    }
    int fib(int n) {
        vector<int> dp(n+1,-1);
        int ans = fib(n,dp);
        return ans;
    }
};