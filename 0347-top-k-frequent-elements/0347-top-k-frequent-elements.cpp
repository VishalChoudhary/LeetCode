class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(auto x:nums){
            umap[x]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto x:umap){
            pq.push({x.second,x.first});
            if(pq.size()>k)
            pq.pop();
        }
        vector<int> ans;
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            ans.push_back(it.second);
        }
        return ans;
    }
};