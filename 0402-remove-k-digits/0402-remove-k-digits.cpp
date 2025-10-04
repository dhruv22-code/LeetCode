class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k == num.length())return "0";
        stack<char>st;
        st.push(num[0]);
        for(int i = 1 ; i < num.length() ; i++){
            if(num[i] >= st.top()){
                st.push(num[i]);
            }else{
                while(k > 0 && !st.empty() && num[i] < st.top())
                {
                    st.pop();
                    k--;
                }
                st.push(num[i]);
            }
        }
        while(k > 0){
            st.pop();
            k--;
        }
        string s;
        string ans;
        while(!st.empty()){
            s += st.top();
            st.pop();
        }
        int j = s.length() - 1;
        for(; j >= 0 ; ){
            if(s[j] == '0')j--;
            else break;
        }
        if(j < 0)return "0";
        for(int i = j ; i >= 0; i--){
            ans += s[i];
        }
        
        return ans;
    }
};