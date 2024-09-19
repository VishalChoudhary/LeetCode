#include<bits/stdc++.h>


pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	// Write your code here.
	int f=floor(a,n,x);
	int c=ceil(a,n,x);
	return make_pair(f,c);
}