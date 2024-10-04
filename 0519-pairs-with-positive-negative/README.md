Given an array of integers, return all the elements having positive and negative values of a number that exists in the array.</br>

Note : If no such pair exists, simply return an empty array, also multiple pairs of the same number could exist and you need to put each of them in the array. Return the pairs in sorted order.</br>

Examples:</br>

Input: arr[] = [1, -3, 2, 3, 6, -1, -3, 3]</br>
Output: [-1, 1, -3, 3, -3, 3]</br>
Explanation: The array contains both 1 and -1, and 3 & -3 two time.</br>
Input: arr[] = [4, 8, 9, -4, 1, -1, -8, -9]</br>
Output: [-1, 1, -4, 4, -8, 8, -9, 9]</br>
Explanation: Here, the array contains the pairs 1 & -1, 4 & -4, 8 & -8, and 9 & -9.</br>
Expected Time Complexity: O(n*log(n))</br>
Expected Auxiliary Space: O(n)</br>

Constraints:</br>
1 <= arr.size() <= 10⁵</br>
-10⁵ <= a[i] <= 10⁵</br>
