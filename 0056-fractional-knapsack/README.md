Given weights and values of n items, we need to put these items in a knapsack of capacity w to get the maximum total value in the knapsack. Return a double value representing the maximum value in knapsack.<br/>
Note: Unlike 0/1 knapsack, you are allowed to break the item here. The details of structure/class is defined in the comments above the given function.<br/>

Examples :<br/>

Input: n = 3, w = 50, value[] = [60,100,120], weight[] = [10,20,30]<br/>
Output: 240.000000<br/>
Explanation: Take the item with value 60 and weight 10, value 100 and weight 20 and split the third item with value 120 and weight 30, to fit it into weight 20. so it becomes (120/30)*20=80, so the total value becomes 60+100+80.0=240.0 Thus, total maximum value of item we can have is 240.00 from the given capacity of sack.<br/> 
Input: n = 2, w = 50, value[] = [60,100], weight[] = [10,20]<br/>
Output: 160.000000<br/>
Explanation: Take both the items completely, without breaking. Total maximum value of item we can have is 160.00 from the given capacity of sack.<br/>
Expected Time Complexity : O(n log n)<br/>
Expected Auxilliary Space: O(1)<br/>

Constraints:<br/>
1 <= n <= 105<br/>
1 <= w <= 109<br/>
1 <= valuei, weighti <= 104<br/>
