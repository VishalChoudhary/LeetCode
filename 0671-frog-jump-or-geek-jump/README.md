There is a frog on the '1st' step of an 'N' stairs long staircase. The frog wants to reach the 'Nth' stair. 'HEIGHT[i]' is the height of the '(i+1)th'</br> stair.If Frog jumps from 'ith' to 'jth' stair, the energy lost in the jump is given by absolute value of ( HEIGHT[i-1] - HEIGHT[j-1] ). </br> If the Frog is on 'ith' staircase, he can jump either to '(i+1)th' stair or to '(i+2)th' stair. Your task is to find the minimum total energy used</br>  by the frog to reach from '1st' stair to 'Nth' stair.</br> 

For Example</br> 

If the given ‘HEIGHT’ array is [10,20,30,10], the answer 20 as the frog can jump from 1st stair to 2nd stair (|20-10| = 10 energy lost) and then a jump from 2nd stair to last stair (|10-20| = 10 energy lost). So, the total energy lost is 20.</br> 
Detailed explanation ( Input/output format, Notes, Images )</br> 

Constraints:</br> 
1 <= T <= 10</br> 
1 <= N <= 100000.</br> 
1 <= HEIGHTS[i] <= 1000 .</br> 

Time limit: 1 sec</br> 

Sample Input 1:</br> 
2</br> 
4</br> 
10 20 30 10</br> 
3</br> 
10 50 10</br> 

Sample Output 1:</br> 
20</br> 
0</br> 

Explanation of sample input 1:</br> 

For the first test case,</br> 
The frog can jump from 1st stair to 2nd stair (|20-10| = 10 energy lost).</br> 
Then a jump from the 2nd stair to the last stair (|10-20| = 10 energy lost).</br> 
So, the total energy lost is 20 which is the minimum. </br> 
Hence, the answer is 20.</br> 

For the second test case:</br> 

The frog can jump from 1st stair to 3rd stair (|10-10| = 0 energy lost).</br> 
So, the total energy lost is 0 which is the minimum. </br> 
Hence, the answer is 0.</br> 

Sample Input 2:</br> 
2</br> 
8</br> 
7 4 4 2 6 6 3 4</br>  
6</br> 
4 8 3 10 4 4 </br> 

Sample Output 2:</br> 
7</br> 
2</br> 

Hints:</br> 
1. Think about all the possibilities at each stair.</br> 
2. Using recursion, try to divide the problem into subproblems and calculate the answer for each subproblem only once - store it for reusing in the future.</br> 
3. The above can also be done iteratively.</br> 
