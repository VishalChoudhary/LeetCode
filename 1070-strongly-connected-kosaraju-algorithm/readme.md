Given an adjacency matrix, adj of a Directed Graph, find the number of strongly connected components (SCCs) in the graph. </br>

Examples:</br>

Input: </br>
adj[][] = [[2, 3], [0], [1], [4], []] </br>

![image](https://github.com/user-attachments/assets/5235ae07-8b9d-475b-80dc-4b80c2dd34d4)

Output: </br>
3 </br>

Explanation: </br>

We can clearly see that there are 3 Strongly Connected Components in the Graph. </br>

![image](https://github.com/user-attachments/assets/9ae2fd5f-4b82-42ae-83bb-3fc7e17cf3c6)

Input: </br>
adj[][] = [[1], [2], [0]] </br>

![image](https://github.com/user-attachments/assets/e80d45b2-3016-4e46-9b3e-01e534c5603b)

Output: </br>
1 </br>

Explanation: </br>
All of the nodes are connected to each other. So, there's only one SCC. </br>

Input: </br>
adj[][] = [[1], []] </br>

Output: </br>
2 </br>

Constraints:
2 ≤ adj.size() ≤ 10<sup>6</sup> </br>
0 ≤ edges ≤ adj.size() - 1 </br>
