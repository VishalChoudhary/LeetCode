#include <iostream>
#include <vector>
using namespace std;

// Function to heapify up
void heapifyUp(vector<int>& heap, int index) {
    int parent = (index - 1) / 2;
    
    // While the current node is smaller than the parent node
    if (index > 0 && heap[index] < heap[parent]) {
        // Swap the current node with the parent
        swap(heap[index], heap[parent]);
        // Recursively heapify up from the parent index
        heapifyUp(heap, parent);
    }
}

// Function to insert an element into the heap
void insert(vector<int>& heap, int value) {
    // Insert the new element at the end of the heap
    heap.push_back(value);
    // Heapify up to maintain heap property
    heapifyUp(heap, heap.size() - 1);
}

// Function to print the heap
void printHeap(const vector<int>& heap) {
    for (int val : heap)
        cout << val << " ";
    cout << endl;
}

int main() {
    vector<int> heap;

    // Insert elements into the min-heap
    insert(heap, 50);
    insert(heap, 30);
    insert(heap, 40);
    insert(heap, 20);
    insert(heap, 10);
    insert(heap, 15);
    insert(heap, 5); // Inserting 5 into the min-heap

    cout << "Min-Heap after insertion: ";
    printHeap(heap);

    return 0;
}
