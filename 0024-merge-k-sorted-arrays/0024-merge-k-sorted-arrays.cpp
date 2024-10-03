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

    vector<int> mergedResult;

    // Process the heap until all elements are merged
    while (!pq.empty()) {
        auto it = pq.top();
        pq.pop();
        
        int value = it.first;
        int arrIdx = it.second.first;  // Index of the array
        int elemIdx = it.second.second; // Index of the element in the array

        // Add the smallest element to the result
        mergedResult.push_back(value);

        if (elemIdx + 1 < kArrays[arrIdx].size()) {
            pq.push({kArrays[arrIdx][elemIdx + 1], {arrIdx, elemIdx + 1}});
        }
    }

    return mergedResult; 
}
