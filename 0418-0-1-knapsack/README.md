A thief is robbing a store and can carry a maximum weight of ‘W’ into his knapsack. </br> There are 'N' items available in the store and the weight and value of each item is known to the thief. </br> Considering the constraints of the maximum weight that a knapsack can carry, you have to find the maximum profit that a thief can generate by stealing items. </br>

Note:
The thief is not allowed to break the items. </br>

For example, N = 4, W = 10 and the weights and values of items are: </br>     weights = [6, 1, 5, 3] </br>     values = [3, 6, 1, 4] </br> Then the best way to fill the knapsack is to choose items with weight 6, 1, and 3. </br> The total value of knapsack = 3 + 6 + 4 = 13. </br>

Detailed explanation (Input/output format, Notes, Images): </br>
Constraints:
    1 <= T <= 10 </br>     1 <= N <= 10^3 </br>     1 <= W <= 10^3 </br>     1 <= weights[i] <= 10^3 </br>     1 <= values[i] <= 10^3 </br>

    where 'T' is the number of test cases, ‘N’ is the number of items, "weights" is the weight of each item, "values" is the value of each item and ‘W’ is the maximum weight the thief can carry. </br>

Sample Input:
1 </br> 4 5 </br> 1 2 4 5 </br> 5 4 8 6 </br>

Sample Output:
13 </br>

Explanation of Sample Output 1: </br>
The most optimal way to fill the knapsack is to choose items with weight 4 and value 8, and weight 1 and value 5. </br> The total value of the knapsack = 8 + 5 = 13. </br>

Sample Input 2: </br>
1 </br> 5 100 </br> 20 24 36 40 42 </br> 12 35 41 25 32 </br>

Sample Output 2: </br>
101 </br>
