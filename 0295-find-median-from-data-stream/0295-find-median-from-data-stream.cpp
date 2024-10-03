class MedianFinder {
public:
    priority_queue<int> left;
    priority_queue<int,vector<int>,greater<int>> right;
    MedianFinder() {
    }
    
    void addNum(int num) {
        if(left.empty() || num<left.top()){
            left.push(num);
        }
        else{
            right.push(num);
        }
        //Balance the heap if more than 2 elements than the other
        //if left has 2 more elements than right
        if(left.size()>right.size()){
            right.push(left.top());
            left.pop();
        }
        if(right.size()>left.size()){
            left.push(right.top());
            right.pop();
        }
    }
    
    double findMedian() {
        if(left.size()==right.size()){
            return (left.top()+right.top())/2.0;
        }
        else if(left.size()>right.size())
        return left.top();
        else return right.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */