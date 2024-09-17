You are given two positive integers 'n' and 'm'. You have to return the 'nth' root of 'm', i.e. 'm(1/n)'. If the 'nth root is not an integer, return -1.</br>

Note:</br>
'nth' root of an integer 'm' is a number, which, when raised to the power 'n', gives 'm' as a result.</br>

Example:</br>
Input: ‘n’ = 3, ‘m’ = 27</br>

Output: 3</br>

Explanation: </br>
3rd Root of 27 is 3, as (3)^3 equals 27.</br>

Detailed explanation ( Input/output format, Notes, Images )</br>

Sample Input 1:</br>
3 27</br>

Sample Output 1:</br>
3</br>

Explanation For Sample Input 1:</br>
3rd Root of 27 is 3, as (3)^3 equals 27.</br>

Sample Input 2:</br>
4 69</br>

Sample Output 2:</br>
-1</br>

Explanation For Sample Input 2:</br>
4th Root of 69 is not an integer, hence -1.</br>

Expected Time Complexity:</br>
Try to do this in O(log(n+m)).</br>

Constraints:</br>
1 <= n <= 30</br>
1 <= m <= 10^9</br>

Time Limit: 1 sec.</br>
