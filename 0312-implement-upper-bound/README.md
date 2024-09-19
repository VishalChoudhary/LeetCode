You are given a sorted array ‘arr’ containing ‘n’ integers and an integer ‘x’.Implement the ‘upper bound’ function to find the index of the upper bound of 'x' in the array.</br>

Note:</br>
1. The upper bound in a sorted array is the index of the first value that is greater than a given value. </br>
2. If the greater value does not exist then the answer is 'n', Where 'n' is the size of the array.</br>
3. Try to write a solution that runs in log(n) time complexity.</br>

Example:</br>

Input : ‘arr’ = {2,4,6,7} and ‘x’ = 5,</br>

Output: 2</br>

Explanation: The upper bound of 5 is 6 in the given array, which is at index 2 (0-indexed).</br>

Detailed explanation ( Input/output format, Notes, Images )</br>
Constraints:</br>
1 <= ‘n’ <= 10^5</br>
1 <= ‘x’ <= 10^9</br>
1 <= ‘arr[i]’ <= 10^9</br>
Time Limit: 1 sec</br>
Sample Input 1:</br>
5 7</br>
1 4 7 8 10</br>

Sample Output 1:</br>
3   </br>

Explanation of sample output 1:</br>
In the given test case, the lowest value greater than 7 is 8 and is present at index 3(0-indexed). </br>

Sample Input 2:</br>
5 10</br>
1 2 5 6 10   </br>


Sample Output 2:</br>
5</br>

Sample Input 3:</br>
7 5</br>
1 5 5 7 7 9 10</br>

Sample Output 3:</br>
3</br>
