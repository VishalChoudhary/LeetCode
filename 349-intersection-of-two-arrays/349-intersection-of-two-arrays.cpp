class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> res;
        unordered_set<int> uset;
        for(int i=0;i<nums1.size();i++){
            uset.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            int key=nums2[i];
            if(uset.find(key)!=uset.end()){
                res.insert(key);
            }
        }
        for(auto it=res.begin();it!=res.end();it++)
            ans.push_back(*it);
        
        return ans;
    }
};