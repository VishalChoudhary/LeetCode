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
    int f(int ind,int prev,int n,vector<string>& nums,vector<vector<int>> &dp){
        //base case
        if(ind==n) return 0;
        if(dp[ind][prev+1]!=-1)
            return dp[ind][prev+1];
        int notTake=0+f(ind+1,prev,n,nums,dp);
        int take=0;
        if(prev==-1 || checkPossible(nums[ind],nums[prev])){
            take=1+f(ind+1,ind,n,nums,dp);
        }
        return dp[ind][prev+1]=max(take,notTake);
    }
    bool comp(string &s1,string &s2){
        return s1.size()<s2.size();
    }
    int longestStrChain(vector<string>& words) {
        int n=words.size();
        sort(words.begin(), words.end(), [](string &s1, string &s2) {
            return s1.size() < s2.size();
        });
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return f(0,-1,n,words,dp);
    }
};