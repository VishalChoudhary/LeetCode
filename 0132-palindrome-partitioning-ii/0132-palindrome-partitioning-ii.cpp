class Solution {
public:
    // Helper function to check if a substring is a palindrome
    bool isPalindrome(int i, int j, string &s) {
        while (i < j) {
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    
    // Recursive function with memoization
    int f(int i, int n, string &str, vector<int> &dp) {
        if (i == n) return 0; // Base case: no cuts needed
        
        if (dp[i] != -1) // Return cached result
            return dp[i];
        
        int minCost = 1e9;
        for (int j = i; j < n; j++) {
            if (isPalindrome(i, j, str)) {
                int cost = 1 + f(j + 1, n, str, dp);
                minCost = min(cost, minCost);
            }
        }
        return dp[i] = minCost;
    }
    
    int minCut(string s) {
        int n = s.size();
        vector<int> dp(n, -1);
        return f(0, n, s, dp) - 1; // Subtract 1 to get the minimum cuts
    }
};
