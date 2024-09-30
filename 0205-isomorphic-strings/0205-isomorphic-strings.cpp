class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length())return false;
        unordered_map<char, char>m;
        unordered_map<char, bool>b;
        for(int i = 0 ; i < s.length() ; i++){
            if(m.find(s[i]) != m.end() && m[s[i]] != t[i])return false;
            else if(m.find(s[i]) == m.end()){
                if(b[t[i]] == true )return false;
            }

            m[s[i]] = t[i];
            b[t[i]] = true;

        }
        return true;
        

    }
};