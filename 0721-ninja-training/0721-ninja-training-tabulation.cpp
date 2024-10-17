int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Initialize DP table
    vector<vector<int>> dp(n,vector<int>(4,-1));

    // Base case: When it's the first day (day 0)
    dp[0][0] = max(points[0][1], points[0][2]);  // Task 0 is not done, max of Task 1 and Task 2
    dp[0][1] = max(points[0][0], points[0][2]);  // Task 1 is not done, max of Task 0 and Task 2
    dp[0][2] = max(points[0][0], points[0][1]);  // Task 2 is not done, max of Task 0 and Task 1
    dp[0][3] = max(points[0][0], max(points[0][1], points[0][2])); // Max of all tasks

    // Fill the DP table for subsequent days
    for(int day=1;day<n;day++){
        for(int last=0;last<4;last++){
            dp[day][last]=0;
            // Reset max for this day
            int maxi=0;
            for(int task=0;task<3;task++){
                if(task!=last){
                    // Calculate the total points for performing the current task on the current day 
                    //and adding the maximum points from the previous day, excluding the last performed task.
                    int point=points[day][task]+dp[day-1][task];
                    maxi=max(maxi,point);
                }
            }
            // Store the best score for this configuration
            dp[day][last]=maxi;
        }
    }
    // Return the maximum points on the last day
    return dp[n-1][3];
}
