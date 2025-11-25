class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,n=s.size();
        vector<int>mpp(256,-1);
        int maxLen=0;
        while(r<n){
            if(mpp[s[r]]!=-1){
                if(mpp[s[r]]>=l){
                    l=mpp[s[r]]+1;
                }
            }
            maxLen=max(maxLen,r-l+1);
            mpp[s[r]]=r;
            r++;
        }
        return maxLen;
    }
};