class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> ump;
        vector<int> ans;
        for(int i=0;i<n;i++){
            ump[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            int key=nums[i];
            auto temp=ump.find(key);
            if(temp->second==1)
                ans.push_back(key);
        }
        return ans;
    }
};