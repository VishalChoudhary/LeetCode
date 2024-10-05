class Solution {
public:
    string customSortString(string order, string str) {
        map<char,int> mpp;
        string ans="";
        for(auto x:str)
            mpp[x]++;
        for(auto x:order){
            if(mpp.find(x)!=mpp.end()){
                auto temp=mpp.find(x);
                int count=temp->second;
                string s(count,x);
                ans+=s;
                mpp.erase(x);
            }
        }
        for(auto x:mpp){
            string s(x.second,x.first);
            ans+=s;
        }
        return ans;
    }
};