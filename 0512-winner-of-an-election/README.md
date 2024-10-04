Given an array of n names arr of candidates in an election, where each name is a string of lowercase characters. A candidate name in the array represents a vote casted to the candidate. Print the name of the candidate that received the maximum count of votes. If there is a draw between two candidates, then print lexicographically smaller name.</br>

Examples :</br>

Input: n = 13</br>
arr[] = {john,johnny,jackie,johnny,john,jackie,jamie,jamie,john,johnny,jamie,johnny,john}</br>
Output: john 4</br>
Explanation: john has 4 votes casted for him, but so does johnny. john is lexicographically smaller, so we print john and the votes he received.</br>
Input: n = 3</br>
arr[] = {andy,blake,clark}</br>
Output: Andy 1</br>
Explanation: All the candidates get 1 votes each. We print andy as it is lexicographically smaller.</br>
Your Task:</br>
You only need to complete the function winner() that takes an array of strings arr, and length of arr n as parameters and returns an array of string of length 2. First element of the array should be the name of the candidate and second element should be the number of votes that candidate got in string format.</br>

Expected Time Complexity: O(n)</br>
Expected Auxiliary Space: O(n)</br>

Constraints:</br>
1 <= n <= 10⁵</br>
1 <= |arri| <= 10⁵
