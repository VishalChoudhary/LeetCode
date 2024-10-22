class Solution {
public:
    //  space optimization
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int totalSum=0;
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
        }
        if(totalSum < target || (totalSum-target)%2!=0) return 0;
        int subsetSum = (totalSum-target)/2;
        vector<int> prev(subsetSum+1,0), curr(subsetSum+1,0);
        prev[0]=1;
        for(int sum=0;sum<=subsetSum;sum++){
            if(nums[0]==0 && sum==0) prev[sum]=2;
            else if(nums[0]==sum) prev[sum]=1;
        }
        for(int ind=1;ind<n;ind++){
            for(int sum=0;sum<=subsetSum;sum++){
                int notPick=prev[sum];
                int pick=0;
                if(nums[ind]<=sum) pick=prev[sum-nums[ind]];
                curr[sum]=pick+notPick;
            }
            prev=curr;
        }
        return prev[(totalSum - target)/2];
    }
};