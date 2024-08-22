Problem statement
You are given a linked list containing 'n' 'head' nodes, where every node in the linked list contains two pointers:



(1) ‘next’ which points to the next node in the list

(2) ‘child’ pointer to a linked list where the current node is the head.



Each of these child linked lists is in sorted order and connected by 'child' pointer.



Your task is to flatten this linked such that all nodes appear in a single layer or level in a 'sorted order'.
![image1-7731](https://github.com/user-attachments/assets/013b6f79-9f2b-4d5a-8106-ef9416a4bee7)


Example:
Input: Given linked list is:

Output:
1 → 2 → 3 → 4 → 5 → 6 → 7 → 8 → 9 → 12 → 20 → null.


Explanation:
The returned linked list should be in a sorted order. All the elements in this returned linked list are connected by 'child' pointers and 'next' pointers point to null.


Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
4
3
1 2 3
3
8 10 15
2
18 22
1
29


Sample Output 1 :
1 2 3 8 10 15 18 22 29

![image](https://github.com/user-attachments/assets/f9704e11-e497-4c7b-a9f3-78f899cca052)


Explanation For Sample Input 1:
The given linked list is 

Therefore after flattening the list will become-
1 -> 2 -> 3 -> 8 -> 10 -> 15 -> 18 -> 22 -> 29 ->null


Sample Input 2 :
5
2
4 6
2
5 71
3
7 8 9
3 
11 12 19
3
14 15 17


Sample Output 2 :
4 5 6 7 8 9 11 12 14 15 17 19 71


Expected Time Complexity:
Try solving this in O(n*n*k), where ‘n’ denotes the number of head nodes and ‘k’ is the average number of child nodes in all 'n' sub-lists.     


Expected Space Complexity:
Try solving this without using any extra space.   


Constraints:
1 <= n <= 100
1 <= k <= 20
1 <= Node.data <= 10^9

Time Limit: 1 sec