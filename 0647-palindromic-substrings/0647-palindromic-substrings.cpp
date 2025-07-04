class Solution {
public:
    int countSubstrings(string s) {
        int n=s.length();
        int count=0;
        //even
        for(int i=0;i<n;++i){
            int l=i,r=i;
            while(l>=0 && r<n && s[l]==s[r]){
                count++;
                l--; r++;
            }
        }
        //odd
        for(int i=0;i<n;i++){
            int l=i,r=i+1;
            while(l>=0 && r<n && s[l]==s[r]){
                count++;
                l--;
                r++;
            }
        }
        return count;
    }
};