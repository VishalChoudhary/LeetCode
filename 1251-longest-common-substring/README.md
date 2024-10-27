You are given two strings, 'str1' and 'str2'. You have to find the length of the longest common substring. </br>

A substring is a continuous segment of a string. For example, "bcd" is a substring of "abcd", while "acd" or "cda" are not. </br>

Example:
Input: ‘str1’ = “abcjklp” , ‘str2’ = “acjkp”. </br>

Output: 3 </br>

Explanation: The longest common substring between ‘str1’ and ‘str2’ is “cjk”, of length 3. </br>

Detailed explanation (Input/output format, Notes, Images): </br>
Sample Input 1:
    wasdijkl </br>     wsdjkl </br>

Sample Output 1:
    3 </br>

Explanation of Sample Input 1: </br> The longest common substring is “jkl”, of length 3. </br>

Sample Input 2:
    tyfg </br>     cvbnuty </br>

Sample Output 2:
    2 </br>

Explanation of Sample Input 2: </br> The longest common substring is “ty”, of length 2. </br>

Expected Time Complexity:
The expected time complexity is O(n*m), where ‘n’ and ‘m’ are the lengths of ‘str1’ and ‘str2’ respectively. </br>

Constraints:
    1 <= str1.length <= 1000 </br>     1 <= str2.length <= 1000 </br>