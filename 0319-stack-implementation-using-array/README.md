Stack is a data structure that follows the LIFO (Last in First out) principle. Design and implement a stack to implement the following functions:</br>

1. Push(num): Push the given number in the stack if the stack is not full.</br>
2. Pop: Remove and print the top element from the stack if present, else print -1.</br>
3. Top: Print the top element of the stack if present, else print -1.</br>
4. isEmpty: Print 1 if the stack is empty, else print 0.</br>
5. isFull: Print 1 if the stack is full, else print 0.</br>

You have been given ‘m’ operations which you need to perform in the stack. Your task is to implement all the functions of the stack.</br>

Example:</br>
We perform the following operations on an empty stack which has capacity 2:</br>
When operation 1 1 is performed, we insert 1 in the stack.</br>
When operation 1 2  is performed, we insert 2 in the stack. </br>
When operation 2 is performed, we remove the top element from the stack and print 2.</br>
When operation 3 is performed, we print the top element of the stack, i.e., 3.</br>
When operation 4 is performed, we print 0 because the stack is not empty.</br>
When operation 5 is performed, we print 0 because the stack is size 1, which is not equal to its capacity.</br>

Detailed explanation ( Input/output format, Notes, Images )</br>
Sample Input 1 :</br>
2 6</br>
1 1</br>
1 2</br>
2</br>
3</br>
4</br>
5</br>
Sample Output 1 :</br>
2 </br>
1</br>
0</br>
0</br>

Explanation For Sample Output 1 :</br>

We perform the following operations on an empty stack which has capacity 2:</br>
When operation 1 1 is performed, we insert 1 in the stack.</br>
When operation 1 2  is performed, we insert 2 in the stack.</br>
When operation 2 is performed, we remove the top element from the stack and print 2.</br>
When operation 3 is performed, we print the top element of the stack, i.e., 1.</br>
When operation 4 is performed, we print 0 because the stack is not empty.</br>
When operation 5 is performed, we print 0 because the stack is size 1, which is not equal to its capacity.</br>

Sample Input 2 :</br>
5 5</br>
1 2</br>
2</br>
2 </br>
1 1</br>
3</br>
Sample Output 2 :</br>
2 </br>
-1</br>
1</br>

Explanation For Sample Output 2 :</br>

We perform the following operations on an empty stack which has a capacity of 5:</br>
When operation 1 2 is performed, we insert 2 in the stack.</br>
When operation 2 is performed, we remove the top element from the stack and print 2.</br>
When operation 2 is performed, as the stack is empty, we print -1.</br>
When operation 1 1 is performed, we insert 1 in the stack.</br>
When operation 3 is performed, we print the top element of the stack, i.e., 1.</br>

Constraints :</br>
1 <= 'n', 'm' <= 10^3</br>
Time Limit: 1 sec</br>
