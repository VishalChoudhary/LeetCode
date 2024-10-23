#include<bits/stdc++.h>
int f(int ind,int W,vector<int> &val, vector<int> &wt,vector<vector<int>> &dp){
	//base case
	if(ind==0){
		if(wt[0]<=W) return val[0];
		else return 0;
	}
	if(dp[ind][W]!=-1)
		return dp[ind][W];
	int notTake=0+f(ind-1,W,val,wt,dp);
	int take=INT_MIN;
	if(wt[ind]<=W) take=val[ind]+f(ind-1,W-wt[ind],val,wt,dp);
	return dp[ind][W]=max(take,notTake);
}
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
	vector<vector<int>> dp(n, vector<int>(w+1,-1));
	return f(n-1,w,values,weights,dp);
}