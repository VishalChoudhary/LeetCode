Problem Link: https://www.naukri.com/code360/problems/top-view-of-the-tree_799401?leftPanelTabValue=PROBLEM</br></br>
You are given a Binary Tree of 'n' nodes.</br>
The Top view of the binary tree is the set of nodes visible when we see the tree from the top.</br>
Find the top view of the given binary tree, from left to right.</br>

Example :</br>
Input: Let the binary tree be:</br>

![image](https://github.com/user-attachments/assets/ce6c1f56-5de2-4a7d-9259-79de54e93a6c)</br>

Output: [10, 4, 2, 1, 3, 6]</br>

Explanation: Consider the vertical lines in the figure. The top view contains the topmost node from each vertical line.</br>

Detailed explanation ( Input/output format, Notes, Images )</br>

Sample Input 1:</br>
1 2 3 4 5 -1 6 -1 7 -1 -1 8 -1 9 -1 -1 11 10 -1 -1 -1 -1 -1</br>

Sample Output 1:</br>
10 4 2 1 3 6</br>

Explanation of Sample Output 1:</br>
The binary tree is:</br>

![image](https://github.com/user-attachments/assets/1dcf4647-6a16-4372-8d1e-49ca4e011f55)</br>

Consider the vertical lines in the figure. The top view contains the topmost node from each vertical line.</br>
In test case 1,</br>

Sample Input 2:</br>
1 2 3 4 5 6 7 8 9 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1</br>

Sample Output 2:</br>
8 4 2 1 3 7</br>

Explanation of Sample Output 2:</br>
The binary tree is:</br>

![image](https://github.com/user-attachments/assets/da012912-d2b0-4735-a304-f36552cf2e4b)</br>

From left to right, the top view of the tree will be [8,4,2,1,3,7], where 9, 5 and 6 will be hidden when we see from the top of the tree.</br>

Expected time complexity :</br>
The expected time complexity is O(n * log(n)).</br>

Constraints:</br>
1 <= 'n' <= 10000</br>
1 <= data in any node <= 10 ^ 6</br>

Time limit: 1 sec</br>
