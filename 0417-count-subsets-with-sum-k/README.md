You are given an array 'arr' of size 'n' containing positive integers and a target sum 'k'. </br>

Find the number of ways of selecting the elements from the array such that the sum of chosen elements is equal to the target 'k'. </br>

Since the number of ways can be very large, print it modulo 10 ^ 9 + 7. </br>

Example: </br>
Input: 'arr' = [1, 1, 4, 5] </br>

Output: 3 </br>

Explanation:
The possible ways are: </br>     [1, 4] </br>     [1, 4] </br>     [5] </br> Hence, the output will be 3. Please note that both 1s present in 'arr' are treated differently. </br>

Detailed explanation (Input/output format, Notes, Images) </br>
Sample Input 1: </br>
4 5 </br> 1 4 4 5 </br>

Sample Output 1: </br>
3 </br>

Explanation For Sample Output 1: </br>
The possible ways are: </br>     [1, 4] </br>     [1, 4] </br>     [5] </br> Hence, the output will be 3. Please note that both 1s present in 'arr' are treated differently. </br>

Sample Input 2: </br>
3 2 </br> 1 1 1 </br>

Sample Output 2: </br>
3 </br>

Explanation For Sample Output 2: </br>
There are three 1s present in the array. Answer is the number of ways to choose any two of them. </br>

Sample Input 3: </br>
3 40 </br> 2 34 5 </br>

Sample Output 3: </br>
0 </br>

Expected time complexity: </br>
The expected time complexity is O('n' * 'k'). </br>

Constraints: </br>
    1 <= 'n' <= 100 </br>     0 <= 'arr[i]' <= 1000 </br>     1 <= 'k' <= 1000 </br>

Time limit: 1 sec </br>
