class Solution {
public:
    vector<int> relativeSortArray(vector<int>& a1, vector<int>& a2) {
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<a1.size();i++){
            mp[a1[i]]++;
        }
        for(int i=0;i<a2.size();i++){
            while(mp[a2[i]]>0){
                ans.push_back(a2[i]);
                mp[a2[i]]--;
            }   
        }
        for(auto it=mp.begin();it!=mp.end();it++){
            while(it->second>0){
                ans.push_back(it->first);
                it->second--;
            }
        }
        return ans;
    }
};