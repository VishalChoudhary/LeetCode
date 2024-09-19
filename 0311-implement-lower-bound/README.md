You are given an array 'arr' sorted in non-decreasing order and a number 'x'. You must return the index of the lower bound of 'x'.</br>

Note:</br>
1. For a sorted array 'arr', 'lower_bound' of a number 'x' is defined as the smallest index 'idx' such that the value 'arr[idx]' is not less than 'x'.If all numbers are smaller than 'x', then 'n' should be the 'lower_bound' of 'x', where 'n' is the size of array.</br>

2. Try to do this in O(log(n)).</br>

Example:</br>
Input: ‘arr’ = [1, 2, 2, 3] and 'x' = 0</br>

Output: 0</br>

Explanation: Index '0' is the smallest index such that 'arr[0]' is not less than 'x'.</br>

Detailed explanation ( Input/output format, Notes, Images )</br>
Constraints:</br>
1 <= ‘n’ <= 10^5</br>
0 <= ‘arr[i]’ <= 10^5</br>
1 <= ‘x’ <= 10^5</br>
Sample Input 1:</br>
6</br>
1 2 2 3 3 5</br>
0</br>

Sample Output 1:</br>
0</br>

Explanation Of Sample Input 1 :</br>
Index '0' is the smallest index such that 'arr[0]' is not less than 'x'.</br>

Sample Input 2:</br>
6</br>
1 2 2 3 3 5</br>
2</br>

Sample Output 2:</br>
1</br>

Sample Input 3:</br>
6</br>
1 2 2 3 3 5</br>
7</br>

Sample Output 3:</br>
6</br>
