#include<bits/stdc++.h>
int cutRod(vector<int> &price, int n)
{
	vector<int> prev(n+1,0), curr(n+1,0);
	for(int N=0;N<=n;N++){
		prev[N]=price[0]*N;
	}
	for(int ind=1;ind<n;ind++){
		for(int N=0;N<=n;N++){
			int notTake=0+prev[N];
			int take=INT_MIN;
			int rodLength=ind+1;
			if(rodLength<=N) take=price[ind]+curr[N-rodLength];
			curr[N]=max(take,notTake);
		}
		prev=curr;
	}
    return prev[n];
}
