class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> s1;
    stack<int> s2;

    void push(int x) {
        s1.push(x);
    }
    
    int pop() { 
        int ans;
        if(!s2.empty()){
            ans=s2.top();
            s2.pop();
        }
        else{
            while(s1.size()){
                s2.push(s1.top());
                s1.pop();
            }
            ans=s2.top();
            s2.pop();
        }
        return ans;
    }
    
    int peek() {
        if(!s2.empty()){
            s2.top();
        }
        else{
            while(s1.size()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};