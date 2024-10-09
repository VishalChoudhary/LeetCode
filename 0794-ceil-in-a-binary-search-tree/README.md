Ninja is given a binary search tree and an integer. Now he is given a particular key in the tree and returns its ceil value. Can you help Ninja solve the problem?</br>

Note:</br>
Ceil of an integer is the closest integer greater than or equal to a given number.</br>
For example:</br>
arr[] = {1, 2, 5, 7, 8, 9}, key = 3.</br>
The closest integer greater than 3 in the given array is 5. So, its ceil value in the given array is 5.</br>
Detailed explanation ( Input/output format, Notes, Images )</br>
Constraints:</br>
1 <= T <= 10    </br>
1 <= N <= 10^5</br>
0 <= node data <= 10^9</br>
1 <= X <= 10^9     </br>

Time limit: 1 second</br>
Sample Input 1:</br>
2</br>
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1</br>
4</br>
8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1</br>
7</br>
Sample Output 1:</br>
5</br>
7</br>
Explanation for Sample Output 1:</br>
 In the first test case, we traverse the tree starting from the root node which has a value of 8. Now the value of its left child is 5 and its right child is 10. Key-value 4 is less than the left child so we traverse the left subtree. Now we reach a node with value 5 and then again repeat the above process till we reach a null node. Finally, we return 5 as our answer.</br>

In the second test case, we traverse the tree starting from the root node which has a value of 8. Now the value of its left child is 5 and its right child is 10. Key-value 7 is less than the right child and more than the left child, so we traverse the right subtree. Now we reach a node with value 10 and then again follow the same procedure and reach a node with value 7 and stop there and return 7 as our final answer.</br>
Sample Input 2:</br>
2</br>
55 25 82 13 34 67 86 6 21 28 47 61 70 84 92 1 10 17 24 26 29 45 54 56 65 68 81 83 85 91 </br>
96 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 </br>
34</br>
84 19 97 0 56 96 99 -1 8 50 83 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1 </br>
50</br>
Sample Output 2:</br>
34</br>
50</br>
