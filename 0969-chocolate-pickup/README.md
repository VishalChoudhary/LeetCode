Ninja has a 'GRID' of size 'R' X 'C'. Each cell of the grid contains some chocolates. Ninja has two friends Alice and Bob, and he wants to collect as many chocolates as possible with the help of his friends. </br>

Initially, Alice is in the top-left position i.e. (0, 0), and Bob is in the top-right place i.e. (0, ‘C’ - 1) in the grid. Each of them can move from their current cell to the cells just below them. When anyone passes from any cell, he will pick all chocolates in it, and then the number of chocolates in that cell will become zero. If both stay in the same cell, only one of them will pick the chocolates in it. </br>

If Alice or Bob is at (i, j) then they can move to (i + 1, j), (i + 1, j - 1) or (i + 1, j + 1). They will always stay inside the ‘GRID’. </br>

Your task is to find the maximum number of chocolates Ninja can collect with the help of his friends by following the above rules. </br>

Example: </br>
Input: </br>     ‘R’ = 3, ‘C’ = 4 </br>     ‘GRID’ = [[2, 3, 1, 2], [3, 4, 2, 2], [5, 6, 3, 5]] </br> Output: 21 </br>

Initially, Alice is at the position (0, 0), and he can follow the path (0, 0) -> (1, 1) -> (2, 1) and will collect 2 + 4 + 6 = 12 chocolates. </br>

Initially, Bob is at the position (0, 3) and he can follow the path (0, 3) -> (1, 3) -> (2, 3) and will collect 2 + 2 + 5 = 9 chocolates. </br>

Hence the total number of chocolates collected will be 12 + 9 = 21. There is no other possible way to collect a greater number of chocolates than 21. </br>

Detailed explanation (Input/output format, Notes, Images) </br>
Constraints: </br>
    1 <= ‘T’ <= 10 </br>     2 <= 'R', 'C' <= 50 </br>     0 <= 'GRID[i][j]'<= 10^2 </br>     Time Limit: 1sec </br>

Sample Input 1: </br>
2 </br> 3 4 </br> 2 3 1 2 </br> 3 4 2 2 </br> 5 6 3 5 </br> 2 2 </br> 1 1 </br> 1 2 </br>

Sample Output 1: </br>
21 </br> 5 </br>

Explanation Of Sample Input 1: </br>
For the first test case, initially Alice is at the position (0, 0) and can follow the path (0, 0) -> (1, 1) -> (2, 1), collecting 2 + 4 + 6 = 12 chocolates. </br>

Initially, Bob is at the position (0, 3) and can follow the path (0, 3) -> (1, 3) -> (2, 3), collecting 2 + 2 + 5 = 9 chocolates. </br>

Hence, the total number of chocolates collected will be 12 + 9 = 21. </br>

For the second test case, Alice will follow the path (0, 0) -> (1, 0) and Bob will follow the path (0, 1) -> (1, 1). The total number of chocolates collected will be 1 + 1 + 1 + 2 = 5. </br>

Sample Input 2: </br>
2 </br> 2 2 </br> 3 7 </br> 7 6 </br> 3 2 </br> 4 5 </br> 3 7 </br> 4 2 </br>

Sample Output 2: </br>
23 </br> 25 </br>
