const int MOD = 1e9+7;
int f(int ind,int sum,vector<int>& arr,vector<vector<int>> &dp){
	if(ind==0) {
        if(sum==0) 
            return(arr[ind]==0)?2:1;
        else
            return(arr[ind]==sum)?1:0;
    }
	if(dp[ind][sum]!=-1) return dp[ind][sum];
	int notPick=f(ind-1,sum,arr,dp);
	int pick=0;
	if(arr[ind]<=sum) pick=f(ind-1,sum-arr[ind],arr,dp);
	return dp[ind][sum]=(pick+notPick)% MOD;
}
int findWays(vector<int>& arr, int k)
{
	int n=arr.size();
	vector<vector<int>> dp(n,vector<int>(k+1,-1));
	return f(n-1,k,arr,dp);
}
