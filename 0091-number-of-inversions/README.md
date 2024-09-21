There is an integer array ‘A’ of size ‘N’.</br>

Number of inversions in an array can be defined as the number of pairs of ‘i’, ‘j’ such that ‘i’ < ‘j’ and ‘A[i]’ > ‘A[j]’.</br>

You must return the number of inversions in the array.</br>

For example,</br>
Input:</br>
A = [5, 3, 2, 1, 4], N = 5</br>
Output:</br>
7</br>

Explanation: </br>
The pairs satisfying the condition for inversion are (1, 2), (1, 3), (1, 4), (1, 5), (2, 3), (2, 4), and (3, 4). </br>
The number of inversions in the array is 7.</br>
Detailed explanation ( Input/output format, Notes, Images )</br>

Sample Input 1:</br>
4</br>
4 3 2 1</br>

Sample Output 1:</br>
6</br>
Explanation Of Sample Input 1:</br>

Input:</br>
A = [4, 3, 2, 1], N = 4</br>
Output:</br>
6</br>
Explanation: </br>
The pairs satisfying the condition for inversion are (1, 2), (1, 3), (1, 4), (2, 3), (2, 4), and (3, 4).   </br> 
The number of inversions in the array is 6.</br>

Sample Input 2:</br>
5</br>
1 20 6 4 5</br>
Sample Output 2:</br>
5</br>

Constraints:</br>
1 <= N <= 10^5</br>
1 <= A[i] <= 10^9</br>
Time Limit: 1 sec</br>
