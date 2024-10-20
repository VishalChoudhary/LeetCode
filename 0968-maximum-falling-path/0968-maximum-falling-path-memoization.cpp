#include <bits/stdc++.h> 
int f(int i,int j,vector<vector<int>>& matrix,vector<vector<int>>& dp,int n,int m){
    //incase leftdiagonal or rightdiagonal goes out of bound
    if(j<0 || j>=m)
    return INT_MIN;
    //base case
    if(i==0)
        return matrix[0][j];
    if(dp[i][j]!=-1) 
        return dp[i][j];
    int up = f(i-1, j, matrix, dp, n, m);
    if(up!=INT_MIN) up+=matrix[i][j];
    int ld = f(i-1, j-1, matrix, dp, n, m);
    if(ld!=INT_MIN) ld+=matrix[i][j];
    int rd = f(i-1, j+1, matrix, dp, n, m);
    if(rd!=INT_MIN) rd+=matrix[i][j];
    return dp[i][j]=max(up,max(ld,rd));
    }
int getMaxPathSum(vector<vector<int>> &matrix)
{
    //  Write your code here.
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>> dp(n,vector<int>(m,-1));
    int maxi=INT_MIN;
    // Start from any element in the last row and find the minimum falling path sum
    for(int j=0;j<m;j++){
        maxi=max(maxi,f(n-1,j,matrix,dp,n,m));
    }
    return maxi;
}