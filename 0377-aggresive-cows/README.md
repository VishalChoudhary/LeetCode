You are given an array 'arr' consisting of 'n' integers which denote the position of a stall.</br>

You are also given an integer 'k' which denotes the number of aggressive cows.</br>

You are given the task of assigning stalls to 'k' cows such that the minimum distance between any two of them is the maximum possible.</br>

Print the maximum possible minimum distance.</br>

Example:</br>
Input: 'n' = 3, 'k' = 2 and 'arr' = {1, 2, 3}</br>

Output: 2</br>

Explanation: The maximum possible minimum distance will be 2 when 2 cows are placed at positions {1, 3}. Here distance between cows is 2.</br>
Detailed explanation ( Input/output format, Notes, Images )</br>
Sample Input 1 :</br>
6 4</br>
0 3 4 7 10 9</br>

Sample Output 1 :</br>
3</br>

Explanation to Sample Input 1 :</br>
The maximum possible minimum distance between any two cows will be 3 when 4 cows are placed at positions {0, 3, 7, 10}. Here distance between cows are 3, 4 and 3 respectively.</br>

Sample Input 2 :</br>
5 2</br>
4 2 1 3 6</br>

Sample Output 2 :</br>
5</br>

Expected time complexity:</br>
Can you solve this in O(n * log(n)) time complexity?</br>

Constraints :</br>
2 <= 'n' <= 10 ^ 5</br>
2 <= 'k' <= n</br>
0 <= 'arr[i]' <= 10 ^ 9</br>
Time Limit: 1 sec.</br>
