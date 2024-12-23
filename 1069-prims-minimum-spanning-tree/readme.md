Given a weighted, undirected, and connected graph with V vertices and E edges, your task is to find the sum of the weights of the edges in the Minimum Spanning Tree (MST) of the graph. </br>

The graph is represented by an adjacency list, where each element adj[i] is a vector containing a vector of integers. </br>
Each vector represents an edge, with the first integer denoting the endpoint of the edge and the second integer denoting the weight of the edge. </br>

Input:

3 3 </br>
0 1 5 </br>
1 2 3 </br>
0 2 1 </br>

![image](https://github.com/user-attachments/assets/bce9a511-9658-4b47-bdc2-b2b549761ea1)

Output:
4 </br>

![image](https://github.com/user-attachments/assets/aceff7c6-b989-466a-b7f5-7c68035fa0e6)

Explanation:
The Spanning Tree resulting in a weight </br>
of 4 is shown above. </br>

Input:
2 1 </br>
0 1 5 </br>

![image](https://github.com/user-attachments/assets/3e384d0f-2741-4602-8d71-ca23957c9cfe)

Output:
5 </br>

Explanation:
Only one Spanning Tree is possible which has a weight of 5. </br>

Constraints:</br>
2 ≤ V ≤ 1000 </br>
V-1 ≤ E ≤ (V * (V - 1)) / 2 </br>
1 ≤ w ≤ 1000 </br>
The graph is connected and doesn't contain self-loops & multiple edges. </br>
