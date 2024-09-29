
vector<int> buildMinHeap(vector<int> &arr)
{
    // Write your code here
    int n=arr.size();
    for(int i=n/2-1;i>=0;i--){
        heapify(arr, n, i);
    }
    return arr;
}
