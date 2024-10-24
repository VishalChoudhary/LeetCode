#include<bits/stdc++.h>
int cutRod(vector<int> &price, int n)
{
	vector<vector<int>> dp(n,vector<int>(n+1,0));
	for(int N=0;N<=n;N++){
		dp[0][N]=price[0]*N;
	}
	for(int ind=1;ind<n;ind++){
		for(int N=0;N<=n;N++){
			int notTake=0+dp[ind-1][N];
			int take=INT_MIN;
			int rodLength=ind+1;
			if(rodLength<=N) take=price[ind]+dp[ind][N-rodLength];
			dp[ind][N]=max(take,notTake);
		}
	}
    return dp[n-1][n];
}
