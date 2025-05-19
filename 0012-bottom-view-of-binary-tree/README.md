Link: https://www.naukri.com/code360/problems/bottom-view-of-binary-tree_893110</br>
You are given a 'Binary Tree'.</br>
Return the bottom view of the binary tree.</br>

Note :</br>
1. A node will be in the bottom-view if it is the bottom-most node at its horizontal distance from the root. </br>
2. The horizontal distance of the root from itself is 0. The horizontal distance of the right child of the root node is 1 and the horizontal distance of the left child of the root node is -1. </br>
3. The horizontal distance of node 'n' from root = horizontal distance of its parent from root + 1, if node 'n' is the right child of its parent.</br>
4. The horizontal distance of node 'n' from root = horizontal distance of its parent from the root - 1, if node 'n' is the left child of its parent.</br>
5. If more than one node is at the same horizontal distance and is the bottom-most node for that horizontal distance, including the one which is more towards the right.</br>

Example:</br>
Input: Consider the given Binary Tree:</br>

![image](https://github.com/user-attachments/assets/964c7c45-7ecd-4fd4-a459-8ba1f97cb64e)</br>
Output: 4 2 6 3 7</br>

Explanation:</br>
Below is the bottom view of the binary tree.</br>

1 is the root node, so its horizontal distance = 0.</br>
Since 2 lies to the left of 0, its horizontal distance = 0-1= -1</br>
3 lies to the right of 0, its horizontal distance = 0+1 = 1</br>
Similarly, horizontal distance of 4 = Horizontal distance of 2 - 1= -1-1=-2</br>
Horizontal distance of 5 = Horizontal distance of 2 + 1=  -1+1 = 0</br>
Horizontal distance of 6 = 1-1 =0</br>
Horizontal distance of 7 = 1+1 = 2</br>

The bottom-most node at a horizontal distance of -2 is 4.</br>
The bottom-most node at a horizontal distance of -1 is 2.</br>
The bottom-most node at a horizontal distance of 0 is 5 and 6. However, 6 is more towards the right, so 6 is included.</br>
The bottom-most node at a horizontal distance of 1 is 3.</br>
The bottom-most node at a horizontal distance of 2 is 7.</br>

Hence, the bottom view would be 4 2 6 3 7</br>

Detailed explanation ( Input/output format, Notes, Images )</br>
Sample input 1 :</br>
1 2 3 -1 -1 5 6 7 8 -1 -1 -1 -1 -1 -1</br>

Sample output 1 :</br>
7 5 8 6</br>

![image](https://github.com/user-attachments/assets/083aa96f-24a5-426d-84d5-2c3724d945a8)</br>
As shown in the above figure,</br>

1 is the root node, so its horizontal distance = 0.</br>
Since 2 lies to the left of 0, its horizontal distance = 0-1= -1</br>
3 lies to the right of 0, its horizontal distance = 0+1 = 1</br>
Similarly, horizontal distance of 5 = Horizontal distance of 3 - 1= 1-1= 0</br>
Horizontal distance of 6 = Horizontal distance of 3 + 1=  1+1 = 2</br>
Horizontal distance of 7 = 0-1 =-1</br>
Horizontal distance of 8 = 0+1 = 1</br>

The bottom-most node at a horizontal distance of -1 is 7.</br>
The bottom-most node at a horizontal distance of 0 is 5.</br>
The bottom-most node at a horizontal distance of 1 is 8.</br>
The bottom-most node at a horizontal distance of 2 is 6.</br>

Hence, the bottom view would be 7 5 8 6.</br>

Sample input 2 :</br>
1 2 3 4 -1 6 7 -1 -1 -1 8 -1 -1 -1 -1 </br>

Sample output 2 :</br>
4 2 6 8 7</br>

Expected Time Complexity:</br>
Try to do this in O(n*log(n)).</br>

Constraints:</br>
1 <= n <= 10000</br>

Where 'n' is the total number of nodes in the binary tree.</br>

Time Limit: 1 sec</br>
