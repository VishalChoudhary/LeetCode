class Solution {
public:
    void findC(int ind,int t,vector<int> &ds,vector<vector<int>> &ans, vector<int> &nums){
        if(ind==nums.size()){
            if(t==0){
                ans.push_back(ds);
            }
            return;
        }
        if(nums[ind]<=t){
            ds.push_back(nums[ind]);
            findC(ind,t-nums[ind],ds,ans,nums);
            ds.pop_back();
        }
        findC(ind+1,t,ds,ans,nums);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findC(0,target,ds,ans,candidates);
        return ans;
    }
};