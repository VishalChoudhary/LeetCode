class Solution {

    void heapify(vector<int> &heap, int n,int index){
    int left=2*index+1;
    int right=2*index+2;
    int largest=index;
    if(left<n && heap[left]>heap[largest]){
        largest=left;
    }
    if(right<n && heap[right]>heap[largest])
    largest=right;
    if(largest!=index){
        swap(heap[largest],heap[index]);
        heapify(heap,n,largest);
    }
}

void heapSort(vector<int>& arr,int n) {
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}

public:
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        heapSort(nums,n);
        return nums;
    }
};