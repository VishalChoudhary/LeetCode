class Solution {
public:
    void findC(int ind,int target,vector<int> &nums,vector<int> &ds,vector<vector<int>> &ans){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            if(i!=ind && nums[i]==nums[i-1]) continue;
            if(nums[i]>target) break;
            ds.push_back(nums[i]);
            findC(i+1,target-nums[i],nums,ds,ans);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        findC(0,target,candidates,ds,ans);
        return ans;
    }
};