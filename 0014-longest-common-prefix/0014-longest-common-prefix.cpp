class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string first=strs[0];
        string end=strs[n-1];

        string ans;
        for(int i=0;i<first.size();i++){
            if(first[i]!=end[i])
            break;
            ans+=first[i];
        }
        return ans;
    }
};