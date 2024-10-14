class Solution {
  public:
    int f(int n,vector<int> &dp,int k,vector<int> &arr){
        int minSteps=INT_MAX;
        if(n==0) return 0;
        if(dp[n]!=-1) return dp[n];
        for(int j=1; j<=k; j++){
            if(n-j>=0){

};