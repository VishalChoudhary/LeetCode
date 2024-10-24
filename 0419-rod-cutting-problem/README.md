Given a rod of length ‘N’ units. The rod can be cut into different sizes and each size has a cost associated with it. </br> Determine the maximum cost obtained by cutting the rod and selling its pieces. </br>

Note:
The sizes will range from 1 to ‘N’ and will be integers. </br>
The sum of the pieces cut should be equal to ‘N’. </br>
Consider 1-based indexing. </br>
Detailed explanation (Input/output format, Notes, Images): </br>
Constraints:
    1 <= T <= 50 </br>     1 <= N <= 100 </br>     1 <= A[i] <= 100 </br>

Where ‘T’ is the total number of test cases, ‘N’ denotes the length of the rod, and A[i] is the cost of sub-length. </br>

Time limit:
1 sec. </br>

Sample Input 1: </br>
2 </br> 5 </br> 2 5 7 8 10 </br> 8 </br> 3 5 8 9 10 17 17 20 </br>

Sample Output 1: </br>
12 </br> 24 </br>

Explanation of sample input 1: </br>
Test case 1: </br> All possible partitions are: </br> 1,1,1,1,1      max_cost = (2+2+2+2+2) = 10 </br> 1,1,1,2      max_cost = (2+2+2+5) = 11 </br> 1,1,3      max_cost = (2+2+7) = 11 </br> 1,4      max_cost = (2+8) = 10 </br> 5      max_cost = (10) = 10 </br> 2,3      max_cost = (5+7) = 12 </br> 1,2,2      max_cost = (2+5+5) = 12 </br>

Clearly, if we cut the rod into lengths 1,2,2, or 2,3, we get the maximum cost which is 12. </br>

Test case 2: </br> Possible partitions are: </br> 1,1,1,1,1,1,1,1      max_cost = (3+3+3+3+3+3+3+3) = 24 </br> 1,1,1,1,1,1,2      max_cost = (3+3+3+3+3+3+5) = 23 </br> 1,1,1,1,2,2      max_cost = (3+3+3+3+5+5) = 22 </br> and so on… </br>

If we cut the rod into 8 pieces of length 1, for each piece, 3 adds up to the cost. Hence, for 8 pieces, we get 8*3 = 24. </br>

Sample Input 2: </br>
1 </br> 6 </br> 3 5 6 7 10 12 </br>

Sample Output 2: </br>
18 </br>

