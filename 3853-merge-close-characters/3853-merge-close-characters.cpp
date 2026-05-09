class Solution {
public:
    string mergeCharacters(string s, int k) {
        stack<char>st;
        int xs = 0;
        unordered_map<char, int>f;
        for(int i = 0; i < s.length(); i++){
            if(f.find(s[i]) != f.end()){
                if(i - xs - f[s[i]] <= k){
                    xs++;
                }else {
                    st.push(s[i]);
                    f[s[i]] = i - xs;;
                }
            }else{
                f[s[i]] = i - xs;
                st.push(s[i]);
            }
        }
        string s1 = "";
        while(!st.empty()){    
            s1 = st.top() + s1;
            st.pop();
        }
        return s1;

    }
};