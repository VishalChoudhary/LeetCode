class Solution {
public:
    int f(int ind1,int ind2,string &s1,string &s2,vector<vector<int>> &dp){
        if(ind1<0 || ind2<0)
            return 0;
        if(dp[ind1][ind2]!=-1)
            return dp[ind1][ind2];
        if(s1[ind1]==s2[ind2])
            return dp[ind1][ind2]=1+f(ind1-1,ind2-1,s1,s2,dp);
        return dp[ind1][ind2]=0+max(f(ind1-1,ind2,s1,s2,dp),f(ind1,ind2-1,s1,s2,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return f(n-1,m-1,text1,text2,dp);
    }
    int longestPalindromeSubseq(string s) {
        string s1=s;
        reverse(s1.begin(),s1.end());
        return longestCommonSubsequence(s,s1); 
    }
    int minInsertions(string s) {
        return s.size()-longestPalindromeSubseq(s);
    }
};