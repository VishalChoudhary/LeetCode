Problem statement</br>
You are given an array 'ARR' of integers having 'N' elements. Your task is to convert the input array into a min-Binary Heap.</br>

A min-Binary heap is a complete binary tree in which the value of each internal node is smaller than or equal to the values of the children of that node.</br>

Note :</br>
1. Input array follows 0 - based indexing. </br>

2. After constructing the min-heap, the Left child of the 'i-th' node should be present at the (2*i + 1)-th index if it exists.</br>

3. After constructing the min-heap, the Right child of the 'i-th' node should be present at the (2*i + 2)-th index if it exists.</br>

4. Note that you do not need to create a tree, just update the array.</br>
Detailed explanation ( Input/output format, Notes, Images )</br>
Constraints :</br>
1 <= T <= 10</br>
1 <= N <= 10^4</br>
-10^9 <= ARR[i] <= 10^9</br>

Where 'ARR[i]' denotes the 'i-th' element of the array 'ARR'.</br>

Time Limit: 1 sec</br>
Sample Input 1 :</br>
2</br>
5</br>
9 3 2 6 7</br> 
4</br>
1 3 2 4</br>
Sample Output 1 :</br>
1</br>
1</br>
Explanation For Sample Input 1 :</br>
For the first test case:</br>
One possible min-heap representation of the input array is the array [ 2, 3, 6, 7, 9 ]. Note that other arrays like [ 2, 6, 3, 9, 7 ], [ 2, 3, 6, 9, 7 ] also represent min-heap.</br>

![image](https://github.com/user-attachments/assets/709a7cfe-87b1-4bb3-a6f9-2106c0959d03)

For the second test case: 

![image](https://github.com/user-attachments/assets/38403c56-f053-4886-a97a-bb737fb8e68d)

The input array is already a min-heap, so we do not need to modify it.</br>
Sample Input 2 :</br>
2</br>
5</br>
1 3 5 4 6</br>
3</br>
8 9 0</br>
Sample Output 2 :</br>
1 </br>
1</br>
Explanation For Sample Input 2 :</br>
For the first test case:</br>
One possible min-heap representation of the input array is the array [ 1, 3, 5, 4, 6 ] which is the same as the input array. </br>

For the second test case: </br>
One possible min-heap representation of the input array is the array [ 0, 8, 9 ].</br>
