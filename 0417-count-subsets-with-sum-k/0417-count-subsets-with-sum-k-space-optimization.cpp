const int MOD = 1e9+7;
int findWays(vector<int>& arr, int k)
{
	int n=arr.size();
	vector<int> prev(k+1,0), curr(k+1,0);
	prev[0]=1;
	for(int sum=0;sum<=k;sum++){
		if(arr[0]==0 && sum==0) 
			prev[sum]=2;
		else if(arr[0]==sum)
			prev[sum]=1;
	}
	for(int ind=1;ind<n;ind++){
		for(int sum=0;sum<=k;sum++){
			int notPick=prev[sum];
			int pick=0;
			if(arr[ind]<=sum) pick=prev[sum-arr[ind]];
			curr[sum]=(pick+notPick)%MOD;
		}
		prev=curr;
	}
	return prev[k];
}
