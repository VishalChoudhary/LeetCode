https://www.naukri.com/code360/problems/subset-sum_3843086
Given a list arr of n integers, return sums of all subsets in it. Output sums can be printed in any order.</br>

Examples:</br>

Input: n = 2, arr[] = {2, 3}</br>
Output: 0 2 3 5</br>
Explanation: When no elements is taken then Sum = 0. When only 2 is taken then Sum = 2. When only 3 is taken then Sum = 3. When element 2 and 3 are taken then Sum = 2+3 = 5.</br>
Example 2:</br>

Input: n = 3, arr = {1, 2, 1}</br>
Output: 0 1 1 2 2 3 3 4</br>
 
Your Task:  </br>
You don't need to read input or print anything. Your task is to complete the function subsetSums() which takes a list/vector and an integer n as an input parameter and returns the list/vector of all the subset sums.</br>

Expected Time Complexity: O(2n)</br>
Expected Auxiliary Space: O(2n)</br>

Constraints:</br>
1 <= n <= 15</br>
0 <= arr[i] <= 104</br>
