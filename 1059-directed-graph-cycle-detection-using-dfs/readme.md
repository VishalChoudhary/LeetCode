Problem Statement: </br>
Given a Directed Graph with V vertices (numbered from 0 to V-1) and E edges, check whether it contains any cycle or not. </br>

The graph is represented as an adjacency list, where adj[i] contains a list of vertices directly reachable from vertex i. Specifically, adj[i][j] represents an edge from vertex i to vertex j. </br>

Examples: </br>

Example 1: </br> 

Input: </br> 

![image](https://github.com/user-attachments/assets/5bdc1981-72a6-423f-9928-73b3683b52db)

adj = [[1], [2], [3], [3]] </br> 

Output: </br> 1 </br>

Explanation: </br> The graph contains a cycle: 3 -> 3. </br>

Example 2: </br> 

Input: </br> adj = [[1], [2], [], []] </br> 

![image](https://github.com/user-attachments/assets/93b85bb8-47e4-43fd-badd-582b6bdf1143)

Output: </br> 0 </br>

Explanation: </br> There is no cycle in the graph. </br>

Constraints: </br>
1 ≤ V, E ≤ 10⁵ </br>
