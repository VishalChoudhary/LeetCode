Given two arrays a[] and b[] respectively of size n and m, the task is to print the count of elements in the intersection (or common elements) of the two arrays.</br>

For this question, the intersection of two arrays can be defined as the set containing distinct common elements between the two arrays. </br>

Example 1:</br>

Input:</br>
n = 5, m = 3</br>
a[] = {89, 24, 75, 11, 23}</br>
b[] = {89, 2, 4}</br>

Output: 1</br>

Explanation: </br>
89 is the only element</br> 
in the intersection of two arrays.</br>

Example 2:</br>
Input:</br>
n = 6, m = 5</br>
a[] = {1, 2, 3, 4, 5, 6}</br>
b[] = {3, 4, 5, 6, 7} </br>

Output: 4</br>

Explanation: </br>
3 4 5 and 6 are the elements </br>
in the intersection of two arrays.</br>
Your Task:</br>
You don't need to read input or print anything. Your task is to complete the function NumberofElementsInIntersection() which takes two integers n and m and their respective arrays a[] and b[]  as input. The function should return the count of the number of elements in the intersection.</br>

 

Expected Time Complexity: O(n + m).</br>
Expected Auxiliary Space: O(n).</br>

Constraints:</br>
1 ≤ n, m ≤ 10⁵</br>
1 ≤ a[i], b[i] ≤ 10⁵</br>
