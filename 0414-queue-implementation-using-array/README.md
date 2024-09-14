Queue is a linear data structure that follows the idea of First In First Out. That means insertion and retrieval operations happen at opposite ends.</br>

Implement a simple queue using arrays.</br>

You are given 'query' queries which are either of the 2 types:</br>

1 'e': Enqueue (add) element ‘e’ at the end of the queue.</br>

2: Dequeue (retrieve) the element from the front of the queue. If the queue is empty, return -1.</br>

Example:</br>
Input: Queries: </br>
             [ 1 2,
               1 7,
               2,
               1 13, 
               2, 
               2, 
               2 ]

Output:</br>
         [ 2, 
           7, 
           13,-1]

Explanation: After each operation, our queue is equal to the following:</br>
1 2: {2}</br>
1 7: {2, 7}</br>
2: {7} and 2 is printed</br>
1 13: {7, 13}</br>
2: {13} and 7 is printed</br>
2: {} and 13 is printed</br>
2: {} and -1 is printed since the queue is empty.</br>
Detailed explanation ( Input/output format, Notes, Images )</br>
Sample Input 1:</br>
7</br>
1 2</br>
1 7</br>
2</br>
1 13</br>
2</br>
2</br>
2</br>

Sample Output 1:</br>
2 7 13 -1</br>

Explanation Of Sample Input 1 :</br>
After each operation, our queue is equal to the following:</br>
1 2: {2}</br>
1 7: {2, 7}</br>
2: {7} and 2 is printed</br>
1 13: {7, 13}</br>
2: {13} and 7 is printed</br>
2: {} and 13 is printed</br>
2: {} and -1 is printed since the queue is empty.</br>


Sample Input 2 :</br>
4</br>
2</br>
2</br>
1 2</br>
1 4</br>


Sample Output 2 :</br>
-1 -1</br>


Explanation Of Sample Input 2 :</br>
After each operation, our queue is equal to the following:</br>
2: {} and -1 is printed since the queue is empty.</br>
2: {} and -1 is printed since the queue is empty.</br>
1 2: {2}</br>
1 4: {2, 4}</br>


Expected time complexity :</br>
Both the enqueue() and dequeue() functions should solve in constant time, that is O(1) time complexity.</br>


Constraints:</br>
1 <= ‘query’ <= 10^5</br>
1 <= ‘e’ <= 10^6</br>
