Examples: </br>

Input: </br> adj = [[2,3,1], [0], [0,4], [0], [2]] </br> 
Output: </br> [0, 2, 3, 1, 4] </br>

Explanation: </br>

Starting from vertex 0, the BFS traversal follows these steps: </br>
Visit 0 → Output: 0 </br>
Visit 2 (first neighbor of 0) → Output: 0, 2 </br>
Visit 3 (next neighbor of 0) → Output: 0, 2, 3 </br>
Visit 1 (next neighbor of 0) → Output: 0, 2, 3, 1 </br>
Visit 4 (neighbor of 2) → Final Output: 0, 2, 3, 1, 4 </br>

Input: </br> adj = [[1, 2], [0, 2], [0, 1, 3, 4], [2], [2]] </br>

![image](https://github.com/user-attachments/assets/6e8475eb-e248-4f5c-843f-d7c4d86d81ba)

Output: </br> [0, 1, 2, 3, 4] </br>

Explanation: </br>

Starting from vertex 0, the BFS traversal proceeds as follows: </br>
Visit 0 → Output: 0 </br>
Visit 1 (first neighbor of 0) → Output: 0, 1 </br>
Visit 2 (next neighbor of 0) → Output: 0, 1, 2 </br>
Visit 3 (first unvisited neighbor of 2) → Output: 0, 1, 2, 3 </br>
Visit 4 (next neighbor of 2) → Final Output: 0, 1, 2, 3, 4 </br>

Input: </br> adj = [[1], [0, 2, 3], [1], [1, 4], [3]] </br> 

![image](https://github.com/user-attachments/assets/474bd46a-bbaf-4e72-84fa-eff8297982c1)

Output: </br> [0, 1, 2, 3, 4] </br>

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
