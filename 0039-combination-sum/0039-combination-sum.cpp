class Solution {
public:

    void findCombination(int ind,int t,vector<vector<int>> &ans, vector<int> ds,vector<int> &nums){
        if(ind==nums.size()){
            if(t==0){
                ans.push_back(ds);
            }
            return;
        }
        if(nums[ind]<=t){
            ds.push_back(nums[ind]);
            findCombination(ind,t-nums[ind],ans,ds,nums);
            ds.pop_back();
        }
        findCombination(ind+1,t,ans,ds,nums);
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0,target,ans,ds,nums);
        return ans;
    }
};