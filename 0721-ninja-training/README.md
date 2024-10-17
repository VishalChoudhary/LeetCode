Ninja is planing this ‘N’ days-long training schedule. Each day, he can perform any one of these three activities. (Running, Fighting Practice or Learning New Moves). Each activity has some merit points on each day. As Ninja has to improve all his skills, he can’t do the same activity in two consecutive days. Can you help Ninja find out the maximum merit points Ninja can earn?</br>

You are given a 2D array of size N*3 ‘POINTS’ with the points corresponding to each day and activity. Your task is to calculate the maximum number of merit points that Ninja can earn.</br>

For Example</br>

If the given ‘POINTS’ array is [[1,2,5], [3 ,1 ,1] ,[3,3,3] ],the answer will be 11 as 5 + 3 + 3.</br>
Detailed explanation ( Input/output format, Notes, Images )</br>
Constraints:</br>
1 <= T <= 10</br>
1 <= N <= 100000.</br>
1 <= values of POINTS arrays <= 100 .</br>

Time limit: 1 sec</br>
Sample Input 1:</br>
2</br>
3</br>
1 2 5 </br>
3 1 1</br>
3 3 3</br>
3</br>
10 40 70</br>
20 50 80</br>
30 60 90</br>

Sample Output 1:</br>
11</br>
210</br>

Explanation of sample input 1:</br>
For the first test case,</br>
One of the answers can be:</br>
On the first day, Ninja will learn new moves and earn 5 merit points.</br> 
On the second day, Ninja will do running and earn 3 merit points. </br>
On the third day, Ninja will do fighting and earn 3 merit points. </br>
The total merit point is 11 which is the maximum. </br>
Hence, the answer is 11.</br>

For the second test case:</br>
One of the answers can be:</br>
On the first day, Ninja will learn new moves and earn 70 merit points.</br> 
On the second day, Ninja will do fighting and earn 50 merit points. </br>
On the third day, Ninja will learn new moves and earn 90 merit points. </br>
The total merit point is 210 which is the maximum. </br>
Hence, the answer is 210.</br>

Sample Input 2:</br>
2</br>
3</br>
18 11 19</br>
4 13 7</br>
1 8 13</br>
2</br>
10 50 1</br>
5 100 11</br>

Sample Output 2:</br>
45</br>
110</br>
