Problem Statement: Min Heap Data Structure</br>
You need to implement a Min Heap data structure and handle two types of operations, based on the input queries:</br>

Insert Operation (0 X):</br>

Insert the integer X into the heap.</br>
Extract Minimum Operation (1):</br>

Print and remove the minimum element from the heap. If there are multiple elements in the heap, the element with the smallest value is always at the top of the heap.</br>
You must remove this element from the heap after printing it.</br>
Input Format:</br>
The first input line contains a single integer T — the number of test cases.</br>
For each test case:</br>

The first line contains an integer N — the number of queries to be executed.</br>
Each of the next N lines contains one query, which can be one of the following two types:</br>
0 X: Insert the integer X into the heap.</br>
1: Print and remove the smallest element from the heap.</br>
Output Format:</br>
For each query of type 1, print the smallest element from the heap, followed by its removal.</br>

Constraints :</br>
1 <= T <= 5</br>
1 <= N <= 10^5</br>
1 <= X <= 50</br>

Time Limit:</br>
1 second.</br>
Example:</br>
Sample Input 1:</br>
Copy code</br>
2</br>
3</br>
0 2</br>
0 1</br>
1</br>
2</br>
0 1</br>
1</br>
Sample Output 1:</br>
Copy code</br>
1</br>
1</br>

Explanation of Sample Input 1:</br>

First Test Case:</br>
Insert 2 into the heap. The heap is now: [2].</br>
Insert 1 into the heap. The heap is now: [1, 2].</br>
Perform query 1 to print and remove the smallest element, which is 1. The heap is now: [2].</br>

Second Test Case:</br>
Insert 1 into the heap. The heap is now: [1].</br>
Perform query 1 to print and remove the smallest element, which is 1. The heap is now empty.</br>

Sample Input 2:</br>
2</br>
5</br>
0 5</br>
1</br>
0 43</br>
0 15</br>
0 5</br>
2</br>
0 4</br>
1</br>

Sample Output 2:</br>
5</br>
4</br>
Explanation of Sample Input 2:</br>

First Test Case:</br>
Insert 5 into the heap. The heap is now: [5].</br>
Perform query 1 to print and remove the smallest element, which is 5. The heap is now empty.</br>
Insert 43 into the heap. The heap is now: [43].</br>
Insert 15 into the heap. The heap is now: [15, 43].</br>
Insert 5 into the heap. The heap is now: [5, 43, 15].</br>
Second Test Case:</br>
Insert 4 into the heap. The heap is now: [4].</br>
Perform query 1 to print and remove the smallest element, which is 4. The heap is now empty.</br>
