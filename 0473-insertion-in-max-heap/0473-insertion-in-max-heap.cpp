

int main() {
    vector<int> heap;

    // Insert elements into the heap
    insert(heap, 50);
    insert(heap, 30);
    insert(heap, 40);
    insert(heap, 20);
    insert(heap, 10);
    insert(heap, 15);
    insert(heap, 45); // Inserting 45

    cout << "Max-Heap after insertion: ";
    printHeap(heap);

    return 0;
}
