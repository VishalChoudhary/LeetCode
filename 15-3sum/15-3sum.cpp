class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //Two Pointer Technique 
        vector<vector<int>> ans;
        set<vector<int>> t;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0;i<n-2;i++){
            int l=i+1,h=n-1;
            while(l<h){
                int current=nums[i]+nums[l]+nums[h];
                if(current==0){
                    t.insert({nums[i],nums[l++],nums[h--]});
                }
                else if(current>0)
                    h--;
                else
                    l++;
            }
        }
        for(auto x:t){
            ans.push_back(x);
        }
        return ans;
    }
};