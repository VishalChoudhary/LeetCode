#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int largest=arr[0];
    int sLargest=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            sLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>sLargest){
            sLargest=arr[i];
        }
        //// Array contain the same elements ex.[5,5,5]
        if(sLargest == INT_MIN){ 
            return -1;
        }
    }
    return sLargest;
}