Problem Statement: </br>
Given a Directed Acyclic Graph (DAG) with V vertices (numbered from 0 to V-1) and a 2D Integer array edges of size E, where each edge is represented as edge[i][0] -> edge[i][1] with a weight of edge[i][2]. </br>

Find the shortest path from the source vertex src = 0 to all other vertices. </br> If it is impossible to reach a vertex, return -1 for that vertex. </br>

Notes: </br>
Input Format: </br>
V: Number of vertices. </br>
E: Number of edges. </br>
edges[i] = [from, to, weight]. </br>
Output: </br>
A list where the i-th element represents the shortest distance from src to vertex i. </br>
If a vertex is not reachable, its value should be -1. </br>

Example 1: </br> 
Input: </br> V = 4, E = 2, edge = [[0,1,2], [0,2,1]] </br> 
Output: </br> [0, 2, 1, -1] </br>

Explanation: </br>

Shortest path from 0 -> 1 is 0->1 with weight 2. </br>
Shortest path from 0 -> 2 is 0->2 with weight 1. </br>
Vertex 3 is not reachable, so the result is -1. </br>

Example 2: </br> 
Input: </br> V = 6, E = 7, edge = [[0,1,2],[0,4,1],[4,5,4],[4,2,2],[1,2,3],[2,3,6],[5,3,1]] </br> 
Output: </br> [0, 2, 3, 6, 1, 5] </br>

Explanation: </br>

Shortest path from 0 -> 1 is 0->1 with weight 2. </br>
Shortest path from 0 -> 2 is 0->4->2 with weight 1+2=3. </br>
Shortest path from 0 -> 3 is 0->4->5->3 with weight 1+4+1=6. </br>
Shortest path from 0 -> 4 is 0->4 with weight 1. </br>
Shortest path from 0 -> 5 is 0->4->5 with weight 1+4=5. </br>

Constraints: </br>

1 ≤ V ≤ 100 </br>
1 ≤ E ≤ min((V * (V - 1)) / 2, 4000) </br>
0 ≤ edge[i][0], edge[i][1] < V </br>
0 ≤ edge[i][2] ≤ 10⁵ </br>
