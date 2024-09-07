You are given a binary tree having 'n' nodes.</br>

The boundary nodes of a binary tree include the nodes from the left and right boundaries and the leaf nodes, each node considered once.</br>

Figure out the boundary nodes of this binary tree in an Anti-Clockwise direction starting from the root node.</br>

Example :</br>
Input: Consider the binary tree A as shown in the figure:</br>

![boundarytraversal-5149](https://github.com/user-attachments/assets/e843fa85-ea0d-4e3d-8fbc-9e98c4a5c95b)</br>

Output: [10, 5, 3, 7, 18, 25, 20]</br>

Explanation: As shown in the figure</br>

The nodes on the left boundary are [10, 5, 3]</br>
The nodes on the right boundary are [10, 20, 25]</br>
The leaf nodes are [3, 7, 18, 25].</br>

Please note that nodes 3 and 25 appear in two places but are considered once.</br>

Detailed explanation ( Input/output format, Notes, Images )</br>

Sample Input 1:</br>
10 5 20 3 8 18 25 -1 -1 7 -1 -1 -1 -1 -1 -1 -1</br>
Sample Output 1:</br>
10 5 3 7 18 25 20</br>

Explanation of Sample Input 1:</br>
The nodes on the left boundary are [10, 5, 3]</br>
The nodes on the right boundary are [10, 20, 25]</br>
The leaf nodes are [3, 7, 18, 25].</br>

Please note that nodes 3 and 25 appear in two places but are considered once.</br>

Sample Input 2:</br>
100 50 150 25 75 140 200 -1 30 70 80 -1 -1 -1 -1 -1 35 -1 -1 -1 -1 -1 -1</br>
Sample Output 2:</br>
100 50 25 30 35 70 80 140 200 150</br>

Constraints:</br>
1 <= n <= 10000</br>
Where 'n' is the total number of nodes in the binary tree.</br>
Time Limit: 1 sec</br>
