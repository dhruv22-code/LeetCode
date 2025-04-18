class MinStack {
public:
stack<pair<int, int>>st;
int small = INT_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        int small = st.empty() ? val : min(st.top().second, val);
        st.push({val, small});
    }
    
    void pop() {
        if(st.empty())return;
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */