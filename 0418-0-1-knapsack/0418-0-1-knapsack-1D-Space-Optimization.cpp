#include<bits/stdc++.h>
int maxProfit(vector<int> &values, vector<int> &weights, int n, int w)
{
	// Write your code here
	vector<int> prev(w+1,0);
	//base case
	for(int i=0;i<=w;i++){
		if(weights[0]<=i) prev[i]=values[0];
		else prev[i]=0;
	}
	for(int ind=1;ind<n;ind++){
		for(int W=w;W>=0;W--){
			int notTake=0+prev[W];
			int take=INT_MIN;
			if(weights[ind]<=W) take=values[ind]+prev[W-weights[ind]];
			prev[W]=max(take,notTake);
		}
	}
	return prev[w];
}
