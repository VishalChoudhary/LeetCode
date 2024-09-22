You're given two sorted arrays 'arr1' and 'arr2' of size 'n' and 'm' respectively and an element 'k'.</br>

Find the element that would be at the 'kth' position of the combined sorted array.</br>

Position 'k' is given according to 1 - based indexing, but arrays 'arr1' and 'arr2' are using 0 - based indexing.</br>

For example :</br>
Input: 'arr1' = [2, 3, 45], 'arr2' = [4, 6, 7, 8] and 'k' = 4</br>
Output: 6</br>
Explanation: The merged array will be [2, 3, 4, 6, 7, 8, 45]. The element at position '4' of this array is 6. Hence we return 6.</br>

Detailed explanation ( Input/output format, Notes, Images )</br>
Sample Input 1:</br>
5</br>
2 3 6 7 9</br>
4</br>
1 4 8 10</br>
4</br>
Sample Output 1:</br>
4</br>
Explanation of sample input 1 :</br>
The merged array will be: [1, 2, 3, 4, 6, 7, 8, 9, 10]</br>

The element at position '4' is 4 so we return 4.</br>
Sample Input 2:</br>
5</br>
1 2 3 5 6</br>
5</br>
4 7 8 9 100  </br>
6</br>
Sample Output 2:</br>
6</br>
Explanation of sample input 2 :</br>
The merged array will be: [1, 2, 3, 4, 5, 6, 7, 8, 9, 100]</br>

The element at position '6'  is 6, so we return 6.</br>
Constraints :</br>
1 <= 'n' <= 5000</br>
1 <= 'm' <= 5000</br>
0 <= 'arr1[i]', 'arr2[i]' <= 10^9</br>
1 <= 'k' <= 'n' + 'm'</br>

'n' and 'm' denote the size of 'arr1' and 'arr2'.</br>

Time limit: 1 second</br>
Expected time complexity :</br>
The expected time complexity is O(log('n') + log('m')).</br> 
