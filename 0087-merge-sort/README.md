Problem statement<br>
Given a sequence of numbers ‘ARR’. Your task is to return a sorted sequence of ‘ARR’ in non-descending order with help of the merge sort algorithm.<br><br>

Example :<br><br>

Merge Sort Algorithm -<br>
Merge sort is a Divide and Conquer based Algorithm. It divides the input array into two-parts, until the size of the input array is not ‘1’. In the return part, it will merge two sorted arrays a return a whole merged sorted array.<br><br>

![image](https://github.com/user-attachments/assets/50eec7d0-c49a-4df8-aa66-504a5d43f26e)

The above illustrates shows how merge sort works.<br><br>

Note :<br>
It is compulsory to use the ‘Merge Sort’ algorithm.<br><br>

Detailed explanation ( Input/output format, Notes, Images )<br><br>

Constraints :<br>
1 <= T <= 50<br>
1 <= N <= 10^4<br>
-10^9 <= arr[i] <= 10^9<br><br>

Time Limit : 1 sec<br><br>

Sample Input 1 :<br>
2<br>
7<br>
3 4 1 6 2 5 7<br>
4<br>
4 3 1 2<br><br>

Sample Output 1 :<br>
1 2 3 4 5 6 7<br>
1 2 3 4<br><br>

Explanation For Sample Input 1:<br><br>

Test Case 1 :<br>
Given ‘ARR’ : { 3, 4, 1, 6, 2, 5, 7 }<br>
Then sorted 'ARR' in non-descending order will be : { 1, 2, 3, 4, 5, 6, 7 }. Non-descending order means every element must be greater than or equal to the previous element.<br><br>

Test Case 2 :<br>
Given ‘ARR’ : { 4, 3, 1, 2 }<br>
Then sorted 'ARR' in non-descending order will be : { 1, 2, 3, 4 }. <br><br>

Sample Input 2 :<br>
2<br>
4<br>
5 4 6 7<br>
3<br>
2 1 1<br><br>

Sample Output 2 :<br>
4 5 6 7<br>
1 1 2<br>
