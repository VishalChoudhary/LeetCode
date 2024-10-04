class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        map<int,int> mpp;
        for(auto x:arr1){
            mpp[x]++;
        }
        for(auto it:arr2){
            if(mpp.find(it)!=mpp.end()){
                auto x=mpp.find(it);
                int count=x->second;
                vector<int> v(count,it);
                ans.insert(ans.end(),v.begin(),v.end());
                mpp.erase(it);
            }
        }
        for(auto x:mpp){
            int ele=x.first;
            int count=x.second;
            vector<int> v(count,ele);
            ans.insert(ans.end(),v.begin(),v.end());
        }
        return ans;
    }
};