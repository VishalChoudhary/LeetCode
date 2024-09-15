#include <bits/stdc++.h> 
class CircularQueue{
    public:
    // Initialize your data structure.
    int front;
    int rear;
    int *arr;
    int size;
    CircularQueue(int n){
        // Write your code here.
        size=n;
        arr=new int[size];
        front=rear=-1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if((rear+1)%size==front)
        return false;
        else if(front==-1 && rear==-1){
        front=rear=0;
        arr[rear]=value;
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=value;
        }
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(front==-1 && rear==-1)
        return -1;
        int temp=arr[front];
        if(rear==front)
        front=rear=-1;
        else{
            front=(front+1)%size;
        }
        return temp;
    }
};
