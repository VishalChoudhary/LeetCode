
vector<int> buildHeap(vector<int> arr, int n)
{	
	// Write your code here 
	for(int i=n/2-1;i>=0;i--){
		heapify(arr,n,i);
	}
	return arr;
}