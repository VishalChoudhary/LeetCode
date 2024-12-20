Given a weighted and directed graph of v vertices and edges, Find the shortest distance of all the vertex's from the source vertex, src and return a list of integers where the ith integer denotes the distance of the ith node from the source node. </br>
If a vertex can't be reached from the source, then mark the distance as 10^8. </br>
Note: If the graph contains a negative cycle then return an array consisting of only -1. </br>

Examples:</br>

Input: </br>
edges = [[0,1,9]], src = 0 </br>

![image](https://github.com/user-attachments/assets/989edb0c-ad40-477c-9b3c-8a5c2fe730f7)

Output: </br>
[0, 9] </br>

Explanation: </br>
Shortest distance of all nodes from source is printed. </br>

Input: </br>
edges = [[0,1,5], [1,0,3], [1,2,-1], [2,0,1]], src = 2 </br>

![image](https://github.com/user-attachments/assets/9468d3eb-0050-4c48-8cf0-46e1de519a66)

Output: </br>
[1, 6, 0] </br>

Explanation: </br>
For nodes 2 to 0, we can follow the path: 2 → 0. This has a distance of 1. </br>
For nodes 2 to 1, we can follow the path: 2 → 0 → 1, which has a distance of 1 + 5 = 6. </br>

Constraints:
1 ≤ V ≤ 500 </br>
1 ≤ E ≤ V*(V-1) </br>
-1000 ≤ data of nodes, weight ≤ 1000 </br>
0 ≤ S < V </br>
