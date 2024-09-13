class Stack {
    
public:
    
    int t=-1;
    int n=0;
    int *arr;

    Stack(int capacity) {
        // Write your code here.
        n=capacity;
        arr=new int[capacity];
    }

    void push(int num) {
        // Write your code here.
        if(t==n-1)
        return;
        t++;
        arr[t]=num;
    }

    int pop() {
        // Write your code here.
        if(t==-1)
        return -1;
        int temp=arr[t];
        t--;
        return temp;
    }
    
    int top() {
        // Write your code here.
        if(t==-1)
        return -1;
        return arr[t];
    }
    
    int isEmpty() {
        // Write your code here.
        if(t==-1)
        return 1;
        return 0;
    }
    
    int isFull() {
        // Write your code here.
        if(t==n-1)
        return 1;
        return 0;
    }
    
};
