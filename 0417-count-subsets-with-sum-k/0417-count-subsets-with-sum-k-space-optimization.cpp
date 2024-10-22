const int MOD = 1e9+7;
int findWays(vector<int>& arr, int k)
{
	int n=arr.size();
	vector<int> prev(k+1,0), curr(k+1,0);
	prev[0]=1;
	