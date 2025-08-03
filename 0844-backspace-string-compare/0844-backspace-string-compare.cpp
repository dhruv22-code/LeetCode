class Solution {
public:
    bool backspaceCompare(string s, string t) {
    stack<int>st;
    stack<int>st1;

    for(int i = 0; i < s.length() ; i++){
        if(!st.empty() && s[i] == '#')st.pop();
        else if(s[i] != '#') st.push(s[i]);
    }
     for(int i = 0; i < t.length() ; i++){
        if(!st1.empty() && t[i] == '#')st1.pop();
        else if(t[i] != '#') st1.push(t[i]);
    }
    if(st == st1)return true;
    else return false;

    }
};