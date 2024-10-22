const int MOD = 1e9+7;
int findWays(vector<int>& arr, int k)
{
	int n=arr.size();
	vector<vector<int>> dp(n,vector<int>(k+1,0));
	dp[0][0]=1;
	for(int sum=0;sum<=k;sum++){
		if(arr[0]==0 && sum==0) 
			dp[0][sum]=2;
		else if(arr[0]==sum)
			dp[0][sum]=1;
	}
	for(int ind=1;ind<n;ind++){
		for(int sum=0;sum<=k;sum++){
			int notPick=dp[ind-1][sum];
			int pick=0;
			if(arr[ind]<=sum) pick=dp[ind-1][sum-arr[ind]];
			dp[ind][sum]=(pick+notPick)%MOD;
		}
	}
	return dp[n-1][k];
}
