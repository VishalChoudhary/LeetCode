
int numberOfInversions(vector<int>&a, int n) {
    // Write your code here.
    return mergeSort(a, 0, n-1);

}