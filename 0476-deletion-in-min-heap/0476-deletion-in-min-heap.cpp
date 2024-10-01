#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int> &heap,int index){
    int left=2*index+1;
    int right=2*index+2;
    int smallest=index;
    if(left<heap.size() && heap[left]<heap[smallest]){
        smallest=left;
    }
    if(right<heap.size() && heap[right]<heap[smallest])
    smallest=right;
    if(smallest!=index){
        swap(heap[smallest],heap[index]);
        heapify(heap,smallest);
    }
}

int removeMin(vector<int> &heap){
    if(heap.size()==0)
    return -1;
    int root=heap[0];
    heap[0]=heap.back();
    heap.pop_back();
    heapify(heap,0);
    return root;
}
void printHeap(const vector<int>& heap) {
    for (int val : heap)
        cout << val << " ";
    cout << endl;
}

int main() {
    vector<int> heap = {5, 10, 15, 20, 50, 40, 30};
    cout << "Min-Heap before removal: ";
    printHeap(heap);
    int removed = removeMin(heap);
    cout << "Removed element: " << removed << endl;
    cout << "Min-Heap after removal: ";
    printHeap(heap);
    return 0;
}
