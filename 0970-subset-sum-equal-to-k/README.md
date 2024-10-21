You are given an array/list ‘ARR’ of ‘N’ positive integers and an integer ‘K’. Your task is to check if there exists a subset in ‘ARR’ with a sum equal to ‘K’. </br>

Note:
Return true if there exists a subset with sum equal to ‘K’. Otherwise, return false. </br>

For Example:
If ‘ARR’ is {1,2,3,4} and ‘K’ = 4, then there exist 2 subsets with sum = 4. These are {1,3} and {4}. Hence, return true. </br>

Detailed explanation (Input/output format, Notes, Images) </br>
Constraints:
    1 <= T <= 5 </br>     1 <= N <= 10^3 </br>     0 <= ARR[i] <= 10^9 </br>     0 <= K <= 10^3 </br>

Time Limit: 1 sec </br>
Sample Input 1: </br>
2 </br> 4 5 </br> 4 3 2 1 </br> 5 4 </br> 2 5 1 6 7 </br>

Sample Output 1: </br>
true </br> false </br>

Explanation For Sample Input 1: </br>
In example 1, ‘ARR’ is {4,3,2,1} and ‘K’ = 5. There exist 2 subsets with sum = 5. These are {4,1} and {3,2}. Hence, return true. </br>

In example 2, ‘ARR’ is {2,5,1,6,7} and ‘K’ = 4. There are no subsets with sum = 4. Hence, return false. </br>

Sample Input 2: </br>
2 </br> 4 4 </br> 6 1 2 1 </br> 5 6 </br> 1 7 2 9 10 </br>

Sample Output 2: </br>
true </br> false </br>

Explanation For Sample Input 2: </br>
In example 1, ‘ARR’ is {6,1,2,1} and ‘K’ = 4. There exists 1 subset with sum = 4. That is {1,2,1}. Hence, return true. </br>

In example 2, ‘ARR’ is {1,7,2,9,10} and ‘K’ = 6. There are no subsets with sum = 6. Hence, return false. </br>

Hints: </br>
Can you find every possible subset of ‘ARR’ and check if its sum is equal to ‘K’? </br>
Can you use dynamic programming and use the previously calculated result to calculate the new result? </br>
Try to use a recursive approach followed by memoization by including both index and sum we can form. </br>
