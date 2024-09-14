class Queue {

	int front, rear;
	vector<int> arr;

public:
	Queue()
	{
		front = -1;
		rear = -1;
		arr.resize(100001);
	}

	// Enqueue (add) element 'e' at the end of the queue.
	void enqueue(int e)
	{
		// Write your code here.
		if(rear==arr.size()-1)
		return;
		if(front==-1 && rear==-1){
			front=0;
			rear=0;
			arr[rear]=e;
		}
		else{
			rear++;
			arr[rear]=e;
		}
	}

	// Dequeue (retrieve) the element from the front of the queue.
	int dequeue()
	{
		// Write your code here.
		if(front==-1 && rear==-1)
		return -1;
		int temp=arr[front];
		if(front==rear){
			front=-1;
			rear=-1;
		}
		else{
			front++;
		}
		return temp;
	}

	int top(){
		return arr[front];
	}
};
