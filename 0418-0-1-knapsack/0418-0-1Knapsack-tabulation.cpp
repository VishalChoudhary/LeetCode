#include<bits/stdc++.h>
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
	vector<vector<int>> dp(n, vector<int>(w+1,0));
	//base case
	for(int i=0;i<=w;i++){
		if(weights[0]<=i) dp[0][i]=values[0];
		else dp[0][i]=0;
	}
	for(int ind=1;ind<n;ind++){
		for(int W=0;W<=w;W++){
			int notTake=0+dp[ind-1][W];
			int take=INT_MIN;
			if(weights[ind]<=W) take=values[ind]+dp[ind-1][W-weights[ind]];
			dp[ind][W]=max(take,notTake);
		}
	}
	return dp[n-1][w];
}