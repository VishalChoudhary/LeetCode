class Solution {
public:
    int f(int i,int j,vector<int>& arr,vector<vector<int>> &dp){
        if(i==j) 
            return 0;
        if(dp[i][j]!=-1)
            return dp[i][j];
        int mini=1e9;
        for(int k=i;k<=j-1;k++){
            int cost=f(i,k,arr,dp)+f(k+1,j,arr,dp)+arr[i-1]*arr[k]*arr[j];
            mini=min(mini,cost);
        }
        return dp[i][j]=mini;
    }
    int minScoreTriangulation(vector<int>& values) {
        int N=values.size();
        vector<vector<int>> dp(N,vector<int>(N,-1));
        return f(1,N-1,values,dp);
    }
};