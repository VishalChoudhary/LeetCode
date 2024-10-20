#include <bits/stdc++.h> 
int getMaxPathSum(vector<vector<int>> &matrix)
{
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> dp(n,vector<int>(m,0));
    // base case
    for(int j=0;j<m;j++){
        dp[0][j]=matrix[0][j];
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<m;j++){
            int up=matrix[i][j]+dp[i-1][j];
            int ld=INT_MIN;
            if(j-1>=0) ld=matrix[i][j]+dp[i-1][j-1];
            int rd=INT_MIN;
            if(j+1<m) rd=matrix[i][j]+dp[i-1][j+1];
            dp[i][j]=max(up,max(ld,rd));
        }
    }
    int maxi=INT_MIN;
    for(int j=0;j<m;j++){
        maxi=max(maxi,dp[n-1][j]);
    }
    return maxi;
}