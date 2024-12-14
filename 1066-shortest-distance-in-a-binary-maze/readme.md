Problem Statement: </br>

You are given a n x m matrix grid where each element can either be 0 or 1. </br> You need to find the shortest distance between a given source cell and a destination cell. </br>

The path can only be created through cells with value 1. </br>
You can move Up, Down, Left, or Right to adjacent cells, provided they are valid and have a value 1. </br>
If the path is not possible between the source and destination, return -1. </br>

Note: The destination cell must have a value of 1. </br>

Input Format: </br>
grid: A 2D integer array of size n x m containing 0 or 1. </br>
source: A pair of integers {x, y} denoting the starting cell (0-based indexing). </br>
destination: A pair of integers {x, y} denoting the target cell (0-based indexing). </br>

Output Format: </br>
An integer representing the shortest distance between the source and destination. </br>
If the path is not possible, return -1. </br>

Example 1: </br> 
Input: </br> grid[][] = {{1, 1, 1, 1}, </br> {1, 1, 0, 1}, </br> {1, 1, 1, 1}, </br> {1, 1, 0, 0}, </br> {1, 0, 0, 1}} </br> source = {0, 1} </br> destination = {2, 2} </br> 
Output: </br> 3 </br>

Example 2: </br> 
Input: </br> grid[][] = {{1, 1, 1, 1, 1}, </br> {1, 1, 1, 1, 1}, </br> {1, 1, 1, 1, 0}, </br> {1, 0, 1, 0, 1}} </br> source = {0, 0} </br> destination = {3, 4} </br>
Output: </br> -1 </br>

Constraints: </br>
1 ≤ n, m ≤ 500 </br>
grid[i][j] is either 0 or 1. </br>
The source and destination cells are always valid cells inside the matrix. </br>

Expected Time and Space Complexity: </br>
Time Complexity: O(n * m) </br>
Space Complexity: O(n * m) </br>
