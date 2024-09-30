class CustomStack {
public:
    int maxSize;
    int top = -1;
    vector<int> st;
    CustomStack(int maxSize) {
        this->maxSize = maxSize;
        st = vector<int>(maxSize, 0);
    }

    void push(int x) {
        if (top < maxSize - 1) {  
            top++;
            st[top] = x;
        }
    }

    int pop() {
        if (top == -1) {
            return -1;
        } else {
            int popped = st[top];
            top--;
            return popped;
        }
    }

    void increment(int k, int val) {
        if (top + 1 < k) {
            for (int i = 0; i <= top; i++)
                st[i] = st[i] + val;
        } else {
            for (int i = 0; i < k; i++)
                st[i] = st[i] + val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */