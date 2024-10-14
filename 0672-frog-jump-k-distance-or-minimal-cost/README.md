There is an array arr of heights of stone and Geek is standing at the first stone and can jump to one of the following: Stone i+1, i+2, ... i+k stone, where k is the maximum number of steps that can be jumped and cost will be |hi-hj| is incurred, where j is the stone to land on. Find the minimum possible total cost incurred before the Geek reaches the last stone.</br>

Example:</br>

Input: k = 3, arr[]= [10, 30, 40, 50, 20]</br>
Output: 30</br>

Explanation: Geek will follow the path 1->2->5, the total cost would be | 10-30| + |30-20| = 30, which is minimum</br>

Input: k = 1, arr[]= [10, 20, 10]</br>

Output: 20</br>

Explanation: Geek will follow the path 1->2->3, the total cost would be |10 - 20| + |20 - 10| = 20.</br>
Expected Time Complexity: O(n*k)</br>
Expected Auxilary Space: O(n)</br>

Constraint:</br>
1<= arr.size() <=10⁴</br>
1 <= k <= 100</br>
1 <= arr[i] <= 10⁴</br>
