You are given an array of ‘N’ integers where each integer value is between ‘1’ and ‘N’. Each integer appears exactly once except for ‘P’, which appears exactly twice, and ‘Q’, which is missing.</br>

Your task is to find ‘P’ and ‘Q’ and return them respectively.</br>

Detailed explanation ( Input/output format, Notes, Images )</br>
Constraints:</br>
2 <= N <= 5 * 10^4</br>
1 <= data <= N</br>

Where ‘N’ is the size of the array and ‘data’ denotes the value of the elements of the array. </br>
Sample Input 1:</br>
4</br>
1 2 3 2</br>
Sample Output 1:</br>
2 4</br>
Explanation Of Sample Input 1:</br>
Input: ‘N’ = 4</br>
‘A’ = [1, 2, 3, 2]</br>
Output: {2, 4} - The integer appearing twice is ‘2’, and the integer missing is ‘4’.</br>

Sample Input 2:</br>
3</br>
1 2 1</br>
Sample Output 2:</br>
1 3</br>
