

int removeMax(vector<int> &heap,int n){
    if(heap.size()==0)
    return -1;
    int root=heap[0];
    heap[0]=heap.back();
    heap.pop_back();
    heapify(heap,n,0);
    return root;
}
void printHeap(const vector<int>& heap) {
    for (int val : heap)
        cout << val << " ";
    cout << endl;
}

int main() {
    // A max-heap represented as a vector
    vector<int> heap = {50, 30, 40, 20, 10, 15, 45};

    cout << "Max-Heap before removal: ";
    printHeap(heap);

    // Remove the root element (50) from the heap
    int removed = removeMax(heap,heap.size());
    cout << "Removed element: " << removed << endl;

    cout << "Max-Heap after removal: ";
    printHeap(heap);

    return 0;
}