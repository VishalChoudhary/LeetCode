class Solution {
public:
    bool isPalindrome(int i,int j,string &s){
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    int f(int i,int n,string &str,vector<int> &dp){
        if(i==n) return 0;
        if(dp[i]!=-1)
            return dp[i];
        int minCost=1e9;
        for(int j=i;j<n;j++){
            if(isPalindrome(i,j,str)){
                int cost=1+f(j+1,n,str,dp);
                minCost=min(cost,minCost);
            }
        }
        return dp[i]=minCost;
    }
    int minCut(string s) {
        int n=s.size();
        vector<int> dp(n,-1);
        return f(0,n,s,dp)-1;
    }
};