Problem Statement: </br>
Given an undirected graph with V vertices labeled from 0 to V-1 and E edges, determine whether the graph contains any cycle or not. </br>

The graph is represented as an adjacency list, where adj[i] contains all the vertices directly connected to vertex i. For an undirected graph, if there is an edge between vertex i and vertex j, then both j will appear in adj[i] and i will appear in adj[j]. </br>

Examples: </br>
Input: </br> adj = [[1], [0,2,4], [1,3], [2,4], [1,3]] </br> Output: </br> 1 </br>

Explanation: </br>

![image](https://github.com/user-attachments/assets/173b4732-472b-4cc0-bbe3-6d1a5f2599a9)

There exists a cycle in the graph: 1->2->3->4->1. </br>

Input: </br> adj = [[], [2], [1,3], [2]] </br> Output: </br> 0 </br>

Explanation: </br> 

![image](https://github.com/user-attachments/assets/1386701d-5dba-4b80-8bea-a11f3c2e68f3)

There is no cycle in the graph. </br>

Constraints: </br>
1 ≤ adj.size() ≤ 10⁵ </br>
