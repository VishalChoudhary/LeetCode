Problem Statement: </br>
You are given a weighted, undirected, and connected graph represented by an adjacency list adj. </br>

You need to find the shortest distance from the source vertex src to all other vertices. </br> Return a list of integers where the i-th element represents the shortest distance from src to vertex i. </br>

Note: The graph does not contain any negative weight edges. </br>

Input Format: </br>
adj: A list of lists where adj[i] contains pairs [v, w], where v is the vertex and w is the weight of the edge between vertex i and vertex v. </br>
src: The source vertex. </br>

Output Format: </br>
A list of integers where the i-th element represents the shortest distance from src to vertex i. </br>

Example 1: </br> 
Input: </br> adj = [[[1, 9]], [[0, 9]]] </br> src = 0 </br> 
Output: </br> [0, 9] </br>

![image](https://github.com/user-attachments/assets/ecd87a66-ad49-477b-a239-9fac2263e167)</br> 
The source vertex is 0. Hence, the shortest distance of node 0 is 0 and the shortest distance from node 0 to 1 is 9.</br> 

Example 2: </br> 
Input: </br> adj = [[[1, 1], [2, 6]], [[2, 3], [0, 1]], [[1, 3], [0, 6]]] </br> src = 2 </br> 
Output: </br> [4, 3, 0] </br>

![image](https://github.com/user-attachments/assets/2f63aae9-e7a3-4d0b-8d87-4e4e191bfaf8)</br> For nodes 2 to 0, we can follow the path 2-1-0. This has a distance of 1+3 = 4, whereas the path 2-0 has a distance of 6. So, the Shortest path from 2 to 0 is 4.
The shortest distance from 0 to 1 is 1 .</br> 

Constraints: </br>

1 ≤ no. of vertices ≤ 1000 </br>
0 ≤ adj[i][j] ≤ 1000 </br>
0 ≤ src < no. of vertices </br>
