class Solution {
	public:
		vector<int> productExceptSelf(vector<int>& nums) 
		{
			vector<int> ans;
			int product=1;
			for(int i=0;i<nums.size();i++)
			{
				ans.push_back(product*=nums[i]);
			}
			product=1;
			for(int i=nums.size()-1;i>0;i--)
			{
				ans[i]=ans[i-1]*product;
				product*=nums[i];
			}
			ans[0]=product;
			return ans;
		}
	};