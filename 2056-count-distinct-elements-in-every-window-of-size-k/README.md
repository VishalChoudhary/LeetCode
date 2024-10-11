Given an array of integers and a number K. Find the count of distinct elements in every window of size K in the array.</br>

Example 1:</br>

Input:</br>
N = 7, K = 4</br>
A[] = {1,2,1,3,4,2,3}</br>
Output: 3 4 4 3</br>
Explanation: Window 1 of size k = 4 is 1 2 1 3. Number of distinct elements inthis window are 3. </br>
Window 2 of size k = 4 is 2 1 3 4. Number of distinct elements in this window are 4.</br>
Window 3 of size k = 4 is 1 3 4 2. Number of distinct elements in this window are 4.</br>
Window 4 of size k = 4 is 3 4 2 3. Number of distinct elements in this window are 3.</br>

Example 2:</br>

Input:</br>
N = 3, K = 2</br>
A[] = {4,1,1}</br>
Output: 2 1</br>
Your Task:</br>
Your task is to complete the function countDistinct() which takes the array A[], the size of the array(N) and the window size(K) as inputs and returns an array containing the count of distinct elements in every contiguous window of size K in the array A[].</br>

Expected Time Complexity: O(N).</br>
Expected Auxiliary Space: O(N).</br>
