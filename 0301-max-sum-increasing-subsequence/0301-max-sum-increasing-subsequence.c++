#include <bits/stdc++.h> 
int f(int ind,int prev,int n,vector<int>& nums,vector<vector<int>> &dp){
        //base case
        if(ind==n) return 0;
        if(dp[ind][prev+1]!=-1)
            return dp[ind][prev+1];
        int notTake=0+f(ind+1,prev,n,nums,dp);
        int take=0;
        if(prev==-1 || nums[ind]>nums[prev]){
            take=nums[ind]+f(ind+1,ind,n,nums,dp);
        }
        return dp[ind][prev+1]=max(take,notTake);
    }
int maxIncreasingDumbbellsSum(vector<int> &rack, int n)
{
	// Write your code here
	vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return f(0,-1,n,rack,dp);
}
