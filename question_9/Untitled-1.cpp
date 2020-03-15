class CQueue {
    
    
public:
stack<int>first;
    stack<int>second;
    CQueue() {

    }
    
    void appendTail(int value) {
        int t=0;
        while(!second.empty()){
            t=second.top();
            first.push(t);
            second.pop();
        }
        second.push(value);
        while(!first.empty()){
            t=first.top();
            second.push(t);
            first.pop();
        }


    }
    
    int deleteHead() {
        if(!second.empty()){
            int t=second.top();
            second.pop();
            return t;
        }
        return -1;
    }
    
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */