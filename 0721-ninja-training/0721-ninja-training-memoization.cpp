#include<bits/stdc++.h>
int f(int day, int last, vector<vector<int>> &points, vector<vector<int>> &dp){
    // Base case: When we're at day 0
    if(day==0){
        int maxi=0;
        //loop btw task 0->2
        for(int task=0;task<3;task++){
            /// We cannot perform the task that was done on the last day
            if(task!=last){
                //if last was task0 then we max btw task1 and task2 at 0th index.
                maxi=max(maxi,points[0][task]);
            }
        }
        return maxi;
    }
    //n-1 to 1 case
    int maxi=0;
    // Check if subproblem has already been computed
    if(dp[day][last]!=-1) return dp[day][last];
    //task btw t0->t2
    for(int task=0;task<3;task++){
        if(task!=last){
             // Compute points by taking the current task and recursively calling for the previous day
            int point=points[day][task]+f(day-1,task,points,dp);
            maxi=max(maxi,point);
        }
       
    }
    //return/passing the day with last task we performed for which we got max result.
    return dp[day][last]=maxi;
}

int ninjaTraining(int n, vector<vector<int>> &points)
{
    //n=day
    vector<vector<int>> dp(n,vector<int>(4,-1));
    return f(n-1,3,points,dp);
}
