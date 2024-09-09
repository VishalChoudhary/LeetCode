You have been given a Binary Tree of 'N' nodes, where the nodes have integer values.</br>

Your task is to return the ln-Order, Pre-Order, and Post-Order traversals of the given binary tree.</br>

For example :</br>
For the given binary tree:</br>

![image](https://github.com/user-attachments/assets/86d16bd4-dbb0-4fbc-b3ef-0d54882638b9)</br>

The Inorder traversal will be [5, 3, 2, 1, 7, 4, 6].</br>
The Preorder traversal will be [1, 3, 5, 2, 4, 7, 6].</br>
The Postorder traversal will be [5, 2, 3, 7, 6, 4, 1].</br>

Detailed explanation </br>

Sample Input 1 :</br>
1 2 3 -1 -1 -1  6 -1 -1</br>

Sample Output 1 :</br>
2 1 3 6 </br>
1 2 3 6 </br>
2 6 3 1</br>

Explanation of Sample Output 1 :</br>
The given binary tree is shown below:</br>

![image](https://github.com/user-attachments/assets/242fa544-32db-4132-ade2-a77f0cfd4606)</br>

Inorder traversal of given tree = [2, 1, 3, 6]</br>
Preorder traversal of given tree = [1, 2, 3, 6]</br>
Postorder traversal of given tree = [2, 6, 3, 1]</br>

Sample Input 2 :</br>
1 2 4 5 3 -1 -1 -1 -1 -1 -1</br>
Sample Output 2 :</br>
5 2 3 1 4 </br>
1 2 5 3 4 </br>
5 3 2 4 1</br>
Explanation of Sample Output 2 :</br>
The given binary tree is shown below:</br>

![image](https://github.com/user-attachments/assets/ebfccf15-102b-4403-9318-b7311cba7a85)</br>

Inorder traversal of given tree = [5, 2, 3, 1, 4]</br>
Preorder traversal of given tree = [1, 2, 5, 3, 4]</br>
Postorder traversal of given tree = [5, 3, 2, 4, 1]</br>
Constraints :</br>
1 <= 'N' <= 10^5</br>
0 <= 'data' <= 10^5   </br>  

where 'N' is the number of nodes and 'data' denotes the node value of the binary tree nodes.</br>

Time limit: 1 sec</br>
