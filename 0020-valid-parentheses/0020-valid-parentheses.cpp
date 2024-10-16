class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        for(int i = 0 ; i < s.length(); i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else{
                if(s[i] == ')' && st.top() == '(' || s[i] == '}' && st.top() == '{' || s[i] == ']' && st.top() == '['){
                    st.pop();
                }
            }
        }
        if(st.empty())return true;
        return false;
        
    }
};