class Solution {
public:
    bool parseBoolExpr(string expression) {
        stack<int>st;
        for (int i = expression.length() - 1; i >= 0; i--) {
            if (expression[i] == '&') {
                st.pop();
                char c = 't';
                while (st.top() != ')') {
                    if (st.top() == 'f')
                        c = 'f';
                    st.pop();
                }
                st.pop();
                st.push(c);
            } else if (expression[i] == '|') {
                st.pop();
                char c = 'f';
                while (st.top() != ')') {
                    if (st.top() == 't')
                        c = 't';
                    st.pop();
                }
                st.pop();
                st.push(c);
            } else if (expression[i] == '!') {
                st.pop();
                char c;
                if (st.top() == 'f')
                    c = 't';
                else
                    c = 'f';
                st.pop();
                st.push(c);
            } else {
                st.push(expression[i]);
            }
        }
        if (st.top() == 't')
            return true;
        else
            return false;
    }
};