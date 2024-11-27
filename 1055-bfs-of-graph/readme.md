Problem Statement: </br>
Given a connected undirected graph represented by an adjacency list adj, which is a vector of vectors where each adj[i] represents the list of vertices connected to vertex i. Perform a Breadth First Traversal (BFS) starting from vertex 0, visiting vertices from left to right according to the adjacency list, and return a list containing the BFS traversal of the graph. </br>

Examples: </br>
Input: </br> adj = [[2,3,1], [0], [0,4], [0], [2]] </br> 

![image](https://github.com/user-attachments/assets/c776d13d-65b9-461c-a3f9-d18397b63f3d)

Output: </br> [0, 2, 3, 1, 4] </br>

Explanation: </br>

Starting from vertex 0, the BFS traversal follows these steps: </br>
Visit 0 → Output: 0 </br>
Visit 2 (first neighbor of 0) → Output: 0, 2 </br>
Visit 3 (next neighbor of 0) → Output: 0, 2, 3 </br>
Visit 1 (next neighbor of 0) → Output: 0, 2, 3, 1 </br>
Visit 4 (neighbor of 2) → Final Output: 0, 2, 3, 1, 4 </br>

Input: </br> adj = [[1, 2], [0, 2], [0, 1, 3, 4], [2], [2]] </br> 

![image](https://github.com/user-attachments/assets/35c2bd70-9cf8-4c92-a3b3-049bb966c3d3)

Output: </br> [0, 1, 2, 3, 4] </br>

Explanation: </br>

Starting from vertex 0, the BFS traversal proceeds as follows: </br>
Visit 0 → Output: 0 </br>
Visit 1 (first neighbor of 0) → Output: 0, 1 </br>
Visit 2 (next neighbor of 0) → Output: 0, 1, 2 </br>
Visit 3 (first unvisited neighbor of 2) → Output: 0, 1, 2, 3 </br>
Visit 4 (next neighbor of 2) → Final Output: 0, 1, 2, 3, 4 </br>
Input: </br> adj = [[1], [0, 2, 3], [1], [1, 4], [3]] </br> Output: </br> [0, 1, 2, 3, 4] </br>

Explanation: </br>

Starting the BFS from vertex 0: </br>
Visit vertex 0 → Output: [0] </br>
Visit vertex 1 (first neighbor of 0) → Output: [0, 1] </br>
Visit vertex 2 (first unvisited neighbor of 1) → Output: [0, 1, 2] </br>
Visit vertex 3 (next neighbor of 1) → Output: [0, 1, 2, 3] </br>
Visit vertex 4 (neighbor of 3) → Final Output: [0, 1, 2, 3, 4] </br>

Constraints: </br>
1 ≤ adj.size() ≤ 10⁴ </br>
1 ≤ adj[i][j] ≤ 10⁴ </br>
