Problem Statement: </br>

Given an adjacency list for a Directed Acyclic Graph (DAG), where adj[u] contains a list of all vertices v such that there exists a directed edge u -> v, return a topological sort for the given graph. </br>

<b>Topological sorting is a linear ordering of vertices such that for every directed edge u -> v, vertex u comes before v in the ordering. </b></br>

Notes: </br>
There may be multiple valid topological orders. </br>
If the returned topological sort is valid, the output is 1, otherwise 0. </br>
Examples: </br>
Example 1: </br> 

Input: </br> adj = [[], [0], [0], [0]] </br> 

![image](https://github.com/user-attachments/assets/514b0939-2384-4a11-87a7-224e0a57e024)

Output: </br> 1 </br>

Explanation: </br> The valid topological orders for the given graph could be: </br>

[3, 2, 1, 0] </br>
[1, 2, 3, 0] </br>
[2, 3, 1, 0] </br>
Example 2: </br> 

Input: </br> adj = [[], [3], [3], [], [0,1], [0,2]] </br> 

![image](https://github.com/user-attachments/assets/91141c31-5d34-4605-9f9f-de8c2be6db9b)

Output: </br> 1 </br>

Explanation: </br> The valid topological orders for the given graph could be: </br>

[4, 5, 0, 1, 2, 3] </br>
[5, 2, 4, 0, 1, 3] </br>


Constraints: </br>
2 ≤ V ≤ 10³ </br>
1 ≤ E ≤ (V * (V - 1)) / 2 </br>
