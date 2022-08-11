class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int> mp;
        string ans="";
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto x:order){
            for(int i=0;i<s.size();i++){
                if(x==s[i]){
                    ans+=s[i];
                    mp[s[i]]--;
                }
            }
        }
        for(auto x:mp){
            while(x.second>0){
                ans+=x.first;
                x.second--;
            }
        }
        return ans;
    }
};