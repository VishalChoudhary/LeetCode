class Solution {
  public:
    int f(int n,vector<int> &dp,int k,vector<int> &arr){
        int minSteps=INT_MAX;
        if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        for(int j=1; j<=k; j++){
            if(n-j>=0){
                int jump=f(n-j,dp,k,arr)+abs(arr[n]-arr[n-j]);
                minSteps=min(jump,minSteps);
            }
        }
        return dp[n]=minSteps;
    }
    int minimizeCost(int k, vector<int>& arr) {
        // Code here
        int n=arr.size();
        vector<int> dp(n+1,-1);
        return f(n-1,dp,k,arr);
    }
};
