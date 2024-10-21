class Solution {
public:
    //space optimization
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int totalSum=0;
        for(int i=0;i<n;i++){
            totalSum+=nums[i];
        }
        //odd no case
        if(totalSum%2!=0) return false;
        int k=totalSum/2;
        vector<vector<bool>> dp(n, vector<bool>(k+1,0));
        vector<bool> prev(k+1,0), curr(k+1,0);
        //base case
        prev[0]=curr[0]=true;
        if(nums[0]<=k) prev[nums[0]]=true;
        for(int ind=1;ind<n;ind++){
            for(int target=1;target<=k;target++){
                bool notTake=prev[target];
                bool take=false;
                if(nums[ind]<=target) take=prev[target-nums[ind]];
                curr[target]=take | notTake;
            }
            prev=curr;
        }
        return prev[k];
    }
};