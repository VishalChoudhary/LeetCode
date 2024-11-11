class Solution {
public:
    bool checkPossible(string &s1, string &s2) {
        if (s1.size() != s2.size() + 1) return false;
        int i = 0, j = 0;
        while (i < s1.size()) {
            if (j < s2.size() && s1[i] == s2[j]) {
                j++;
            }
            i++;
        }
        return j == s2.size();
    }
    bool comp(string &s1,string &s2){
        return s1.size()<s2.size();
    }
    int longestStrChain(vector<string>& words) {
        int n=words.size();
        sort(words.begin(), words.end(), [](string &s1, string &s2) {
            return s1.size() < s2.size();
        });
        vector<vector<int>> dp(n+1, vector<int>(n + 1, 0));
        if(n==0) return 0;
        for(int ind=n-1;ind>=0;ind--){
            for(int prev=n-1;prev>=-1;prev--){
                int notTake=0+dp[ind+1][prev+1];
                int take=0;
                if(prev==-1 || checkPossible(words[ind],words[prev])){
                    take=1+dp[ind+1][ind+1];
                }
                dp[ind][prev+1]=max(take,notTake);
            }
        }
        return dp[0][0];
    }
};