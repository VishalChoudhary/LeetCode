class Solution {
	public:
		vector<int> productExceptSelf(vector<int>& nums) 
		{          
            vector<int> ans;
            int product=1;
            int n=nums.size();
            for(int i=0;i<n;i++){
                ans.push_back(product*=nums[i]);
            }
            product=1;
            for(int i=n-1;i>0;i--){
                ans[i]=ans[i-1]*product;
                product*=nums[i];
            }
            ans[0]=product;
            return ans;
		}
	};