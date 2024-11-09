Ninja has recently joined the gym. He decides to lift dumbbells to build muscles. The rack contains dumbbells with varying weights. His strategy is to pick a dumbbell randomly from the rack and after exercising place it back to its original position. Now for the next exercise, he can only pick dumbbells that are heavier and positioned right to the previously used one. After completing all the exercises, he has to tell the sum of weights of all dumbbells he picked to his trainer. </br>

In order to impress his trainer, he wants this sum to be as maximum as possible. As Ninja is saving energy for exercises, he asks you to help him choose dumbbells. Can you help Ninja to impress his trainer? </br>

Example:
If the ‘RACK’ contains dumbbells with weights [5, 1, 2, 8], then the possible ways to choose dumbbells according to the given conditions are: [5], [1], [2], [8], [5, 8], [1, 2], [1, 2, 8], [2, 8]. Lifting dumbbells with weights [5, 8] gives the maximum sum of 13. </br>

Detailed explanation (Input/output format, Notes, Images): </br>
Constraints:
1 <= T <= 5 </br> 1 <= N <= 1000 </br> 1 <= RACK[i] <= 10^5 </br>

Time Limit:
1 sec </br>

Sample Input 1:
2 </br> 4 </br> 9 1 2 8 </br> 1 </br> 8 </br>

Sample Output 1:
11 </br> 8 </br>

Explanation For Sample Output 1:
For the first test case: </br> [9], [1], [2], [8], [2, 8], [1, 2, 8], [1, 2], [1, 8] — these are the possible increasing dumbbell weights in which there is only one way i.e. [1, 2, 8] to have a maximum sum of 11. </br>

For the second test case: </br> There is only one dumbbell, so the maximum weight that can be lifted is 8. </br>

Sample Input 2:
2 </br> 6 </br> 1 2 3 4 5 6 </br> 3 </br> 3 2 1 </br>

Sample Output 2:
21 </br> 3 </br>