//using memoization
class Solution {
    int fib(int n,vector<int> &dp){
        if(n<=1)
            return n;
        //solution for this dp already exist no need to compute again
        if(dp[n]!=-1)
            return dp[n];
        //calculating the values and storing it to dp for reuse
        return dp[n]=fib(n-1,dp)+fib(n-2,dp);
    }
public:
    int fib(int n) {
        vector<int> dp(n+1,-1);
        int ans=fib(n,dp);
        return ans;
    }
};