You are given a BST (Binary search tree) with’ N’ number of nodes and a value ‘X’. Your task is to find the greatest value node of the BST which is smaller than or equal to ‘X’.</br>

Note :‘X’ is not smaller than the smallest node of BST .</br>

For example:</br>

![image](https://github.com/user-attachments/assets/80f538f4-3b45-4398-9700-8ffe00c0429e)</br>

In the above example, For the given BST  and X = 7, the greatest value node of the BST  which is smaller than or equal to  7 is 6.</br>
Detailed explanation ( Input/output format, Notes, Images )</br>
Constraints:</br>
1 <= T <= 5</br>
1 <= N <= 5 * 10 ^ 3</br>
1 <= nodeVal[i] <= 10 ^ 9</br>

Time Limit: 1 sec.</br>
Sample Input 1:</br>
2</br>
10 5 15 2 6 -1 -1 -1 -1 -1 -1</br>
7</br>
2 1 3 -1 -1 -1 -1</br>
2</br>
Sample Output 1:</br>
6</br>
2</br>
Explanation of Sample Input 1:</br>

In the first test case, the BST looks like as below:</br>

![image](https://github.com/user-attachments/assets/27ccf6f5-a26b-491c-ab84-d90af0768876)</br>

The greatest value node of the BST which is smaller than or equal to  7 is 6.</br>

In the second test case, the BST looks like as below:</br>

![image](https://github.com/user-attachments/assets/81224fae-f78e-45ab-a39c-7d8c013c3ad7)</br>

The greatest value node of the BST which is smaller than or equal to  2 is 2.</br>
Sample Input 2:</br>
2</br>
5 3 10 2 4 6 15 -1 -1 -1 -1 -1 -1 -1 -1</br>
15</br>
5 3 10 2 4 6 15 -1 -1 -1 -1 -1 -1 -1 -1</br>
8</br>
Sample Output 2:</br>
15</br>
6</br>
