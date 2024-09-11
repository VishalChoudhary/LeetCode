Given a binary tree of nodes 'N', you need to modify the value of its nodes, such that the tree holds the Children sum property.</br>

A binary tree is said to follow the children sum property if, for every node of that tree, the value of that node is equal to the sum of the value(s) of all of its children nodes( left child and the right child).</br>

Note :</br>
 1. You can only increment the value of the nodes, in other words, the modified value must be at least equal to the original value of that node.</br>
 2. You can not change the structure of the original binary tree.</br>
 3. A binary tree is a tree in which each node has at most two children.</br>      
 4. You can assume the value can be 0 for a NULL node and there can also be an empty tree.</br>

Constraints :</br>
1 <= T <= 10^2</br>
0 <= N <= 10^2</br>
1 <= node.Value <= 10^6</br>

Time Limit : 1 sec</br>
Sample Input 1 :</br>
1</br>
2 35 10 2 3 5 2 -1 -1 -1 -1 -1 -1 -1 -1 </br>
Sample Output 1 :</br>
Valid ( One of the possible answers is : 45 35 10 32 3 8 2 -1 -1 -1 -1 -1, thus if the user modifies the given tree like this, the output printed will be valid).</br>
Explanation For Sample Input 1 :</br>
The tree can be represented as follows :</br>

![image](https://github.com/user-attachments/assets/fb09edf2-d5f7-4f89-8659-1fbf4c52b366)</br>

The value at the root node is 2 which is less than the sum of its children’s values (35 + 10). So we simply increase the value at the root node to 45. The node with value  = 35 has children with values 2 and 3 so their sum i.s 2 + 3 = 5 < 35. As we can't decrement any value, so instead we have to increase the sum of children and thus we update 35's children (2 and 3) as 30 and 5 so that 30 + 5 = 35 and the same is done for the children of the node with value = 10.</br>
The final tree looks like this :</br>

![image](https://github.com/user-attachments/assets/77c96836-c859-4506-8bbc-b74c746807d9)</br>

Note that there can be many other valid solutions.</br>
Sample Input 2 :</br>
1</br>
10 5 5 -1 -1 -1 -1</br>
Sample Output 2 :</br>
Valid</br>
