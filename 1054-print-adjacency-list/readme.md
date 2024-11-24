Given an undirected graph with V nodes and E edges, create and return an adjacency list of the graph. 0-based indexing is followed everywhere. </br>

Example 1:
Input: </br> V = 5, E = 7 </br> edges = [[0,1], [0,4], [4,1], [4,3], [1,3], [1,2], [3,2]] </br>

Output: </br> [[1,4], [0,2,3,4], [1,3], [1,2,4], [0,1,3]] </br>

Explanation: </br>

Node 0 is connected to 1 and 4. </br>
Node 1 is connected to 0, 2, 3, and 4. </br>
Node 2 is connected to 1 and 3. </br>
Node 3 is connected to 1, 2, and 4. </br>
Node 4 is connected to 0, 1, and 3. </br>
Example 2:
Input: </br> V = 4, E = 3 </br> edges = [[0,3], [0,2], [2,1]] </br>

Output: </br> [[2,3], [2], [0,1], [0]] </br>

Explanation: </br>

Node 0 is connected to 2 and 3. </br>
Node 1 is only connected to 2. </br>
Node 2 is connected to 0 and 1. </br>
Node 3 is only connected to 0. </br>
Constraints:
1 ≤ V, E ≤ 10⁵ </br>