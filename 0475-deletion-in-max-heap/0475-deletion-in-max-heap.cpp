#include<bits/stdc++.h>
using namespace std;

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

int removeMax(vector<int> &heap,int n){
    if(heap.size()==0)
    return -1;
    int root=heap[0];    // The root is the largest element
    heap[0]=heap.back();   // Move the last element to the root
    heap.pop_back();    // Remove the last element
    heapify(heap,n,0);  // Heapify down from the root to restore the heap property
    return root;
}
void printHeap(const vector<int>& heap) {
    for (int val : heap)
        cout << val << " ";
    cout << endl;
}

int main() {
    vector<int> heap = {50, 30, 40, 20, 10, 15, 45};
    cout << "Max-Heap before removal: ";
    printHeap(heap);
    int removed = removeMax(heap,heap.size());
    cout << "Removed element: " << removed << endl;
    cout << "Max-Heap after removal: ";
    printHeap(heap);
    return 0;
}
