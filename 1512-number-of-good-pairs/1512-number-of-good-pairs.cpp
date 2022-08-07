class Solution 
{
public:
	int numIdenticalPairs(vector<int>& nums) 
	{
		map<int,int> mp;
		for(auto x:nums) mp[x]++;
		int ans=0;
		for(auto x:mp)
		{
			if(x.second>1)
				ans+=x.second*(x.second-1)/2;
		}
		return ans;
	}
};