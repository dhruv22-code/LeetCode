class Solution {
public:
    string reverseWords(string s) {
        vector<string> s1;
        string ans;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ')
                continue;
            else {
                string aux;
                while (i < s.length() && s[i] != ' ') {
                    aux += s[i];
                    i++;
                }
                s1.push_back(aux);
            }
        }
        for(int i  =s1.size() -1 ;i >= 0;i--){
            ans += s1[i];
            if(i!= 0)
            ans += ' ';
           
        }
        return ans;
    }
};