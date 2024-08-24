Given arrival and departure times of all trains that reach a railway station. Find the minimum number of platforms required for the railway station so that no train is kept waiting.</br>
Consider that all the trains arrive on the same day and leave on the same day. Arrival and departure time can never be the same for a train but we can have arrival time of one train equal to departure time of the other. At any given instance of time, same platform can not be used for both departure of a train and arrival of another train. In such cases, we need different platforms.</br>

Examples:</br>
Input: n = 6, arr[] = {0900, 0940, 0950, 1100, 1500, 1800},</br>
            dep[] = {0910, 1200, 1120, 1130, 1900, 2000}</br>
Output: 3</br>
Explanation: There are three trains during the time 0940 to 1200. So we need minimum 3 platforms.</br>
</br>Input: n = 3, arr[] = {0900, 1235, 1100}, </br>
            dep[] = {1000, 1240, 1200}</br>
Output: 1</br>
Explanation: All train times are mutually exlusive. So we need only one platform</br>
</br>Input: n = 3, arr[] = {1000, 0935, 1100}, </br>
            dep[] = {1200, 1240, 1130}</br>
Output: 3</br>
Explanation: All 3 trains have to be their from 11:00 to 11:30</br>
 

Note: Time intervals are in the 24-hour format(HHMM) , where the first two characters represent hour (between 00 to 23 ) and the last two characters represent minutes (this will be <= 59 and >= 0).

</br>Expected Time Complexity: O(nLogn)</br>
Expected Auxiliary Space: O(n)</br>

Constraints:</br>
1 ≤ n ≤ 50000</br>
0000 ≤ arr[i] ≤ dep[i] ≤ 2359</br>
