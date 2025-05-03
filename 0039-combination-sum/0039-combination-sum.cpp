class Solution {
public:
    void findCombination(int ind,int target,vector<int>& arr,vector<int>& ds,
    vector<vector<int>> &ans){
        if(ind==arr.size()){
            if(target == 0){
                ans.push_back(ds);
            }
            return;
        }
        //pickup
        if(target>=arr[ind]){
            ds.push_back(arr[ind]);
            findCombination(ind,target-arr[ind],arr,ds,ans);
            ds.pop_back();
        }
        //not-pick
        findCombination(ind+1,target,arr,ds,ans);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0,target,candidates,ds,ans);
        return ans;
    }
};