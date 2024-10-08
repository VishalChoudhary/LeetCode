There is BST given with the root node with the key part as an integer only. You need to find the in-order successor and predecessor of a given key. If either predecessor or successor is not found, then set it to NULL.</br>

Note:- In an inorder traversal the number just smaller than the target is the predecessor and the number just greater than the target is the successor. </br>

Example 1:</br>

![image](https://github.com/user-attachments/assets/30c3d4cf-d981-4424-a5ad-e243dd1bbb86)</br>

Example 2:</br>

![image](https://github.com/user-attachments/assets/251b1f18-7a2d-40e1-96e6-0d2904093138)</br>

Your Task: You don't need to print anything. You need to update pre with the predecessor of the key or NULL if the predecessor doesn't exist and succ to the successor of the key or NULL if the successor doesn't exist. pre and succ are passed as an argument to the function findPreSuc(). Please note, The key may be located either inside or outside the tree.</br>

Expected Time Complexity: O(Height of the BST).</br>
Expected Auxiliary Space: O(Height of the BST).</br>

Constraints: </br>
1 <= Number of nodes <= 10⁴</br>
1 <= key of node <= 10⁷</br>
1 <= key <= 10⁷
