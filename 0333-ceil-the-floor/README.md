You're given a sorted array 'a' of 'n' integers and an integer 'x'.</br>

Find the floor and ceiling of 'x' in 'a[0..n-1]'.</br>

Note:</br>
Floor of 'x' is the largest element in the array which is smaller than or equal to 'x'.</br>
Ceiling of 'x' is the smallest element in the array greater than or equal to 'x'.</br>

Example:</br>
Input: </br>
n=6, x=5, a=[3, 4, 7, 8, 8, 10]   </br>

Output:</br>
4</br>

Explanation:</br>
The floor and ceiling of 'x' = 5 are 4 and 7, respectively.</br>

Detailed explanation ( Input/output format, Notes, Images )</br>
Sample Input 1 :</br>
6 8</br>
3 4 4 7 8 10</br>

Sample Output 1 :</br>
8 8</br>

Explanation of sample input 1 :</br>
Since x = 8 is present in the array, it will be both floor and ceiling.</br>

Sample Input 2 :</br>
6 2</br>
3 4 4 7 8 10</br>

Sample Output 2 :</br>
-1 3</br>

Explanation of sample input 2 :</br>
Since no number is less than or equal to x = 2 in the array, its floor does not exist. The ceiling will be 3.</br>

Constraints :</br>
1 <= n <= 2 * 10^5</br>      
1 <= a[i] <= 10^9</br>
Time limit: 1 sec</br>
