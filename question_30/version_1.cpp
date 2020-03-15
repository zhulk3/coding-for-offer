class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {


    }
    
    void push(int x) {
        store.push(x);
        if(assit.size()<=0||x<assit.top())
        assit.push(x);
        else
        assit.push(assit.top());
    }
    
    void pop() {
        store.pop();
        assit.pop();
    }
    
    int top() {
       return store.top();
    }
    
    int min() {
        return assit.top();
    }
    stack<int>store;
    int min_num;
    stack<int>assit;
    int sz=0;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */