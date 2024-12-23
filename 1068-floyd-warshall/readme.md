The problem is to find the shortest distances between every pair of vertices in a given edge-weighted directed graph. </br>
The graph is represented as an adjacency matrix. mat[i][j] denotes the weight of the edge from i to j. </br>
If mat[i][j] = -1, it means there is no edge from i to j. </br>
Note: Modify the distances for every pair in place. </br>

Examples:</br>

Input: </br>
mat = [[0, 25], [-1, 0]] </br>

![image](https://github.com/user-attachments/assets/4bac6d59-b431-4c9a-aa7c-149dc2298c71)

Output: </br>
[[0, 25], [-1, 0]] </br>

![image](https://github.com/user-attachments/assets/108e1b91-1050-41b4-9f83-71eaba124a5b)

Explanation: </br>
The shortest distance between every pair is already given (if it exists). </br>

Input: </br>
mat = [[0, 1, 43], [1, 0, 6], [-1, -1, 0]] </br>

![image](https://github.com/user-attachments/assets/39d0aff4-1748-479e-8176-425dbe13e3b1)

Output: </br>
[[0, 1, 7], [1, 0, 6], [-1, -1, 0]] </br>

![image](https://github.com/user-attachments/assets/7ccef19b-33d2-4731-b252-07b1953b413d)

Explanation: </br>
We can reach 2 from 0 as 0 → 1 → 2 and the cost will be 1 + 6 = 7, which is less than 43. </br>

Constraints:</br>
1 ≤ mat.size() ≤ 100 </br>
-1 ≤ mat[i][j] ≤ 1000 </br>
