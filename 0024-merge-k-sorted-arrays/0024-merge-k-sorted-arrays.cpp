#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    // Push the first element of each array into the heap
    for (int i = 0; i < k; i++) {
        if (!kArrays[i].empty()) {
            pq.push({kArrays[i][0], {i, 0}}); 
        }
    }

    
    return mergedResult; 
}
