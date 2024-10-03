You have been given ‘K’ different arrays/lists, which are sorted individually (in ascending order). You need to merge all the given arrays/list such that the output array/list should be sorted in ascending order.</br>

Detailed explanation ( Input/output format, Notes, Images )</br>
Constraints :</br>
1 <= T <= 5</br>
1 <= K <= 5</br>
1 <= N <= 20</br>
-10^5 <= DATA <= 10^5</br>

Time Limit: 1 sec </br>

Sample Input 1:</br>
1</br>
2</br>
3 </br>
3 5 9 </br>
4 </br>
1 2 3 8</br>   
Sample Output 1:</br>
1 2 3 3 5 8 9 </br>
Explanation of Sample Input 1:</br>
After merging the two given arrays/lists [3, 5, 9] and [ 1, 2, 3, 8], the output sorted array will be [1, 2, 3, 3, 5, 8, 9].</br>

Sample Input 2:</br>
1</br>
4</br>
3</br>
1 5 9</br>
2</br>
45 90</br>
5</br>
2 6 78 100 234</br>
1</br>
0</br>
Sample Output 2:</br>
0 1 2 5 6 9 45 78 90 100 234</br>
Explanation of Sample Input 2 :</br>
After merging the given arrays/lists [1, 5, 9], [45, 90], [2, 6, 78, 100, 234] and [0], the output sorted array will be [0, 1, 2, 5, 6, 9, 45, 78, 90, 100, 234].
