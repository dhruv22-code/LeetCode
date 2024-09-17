class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int>f;
        for (int i = 0; i < s1.length(); i++) {
            string s;
            while (i < s1.length() && s1[i] != ' ') {
                s += s1[i];
                i++;
            }
            f[s]++;
         
        }
         for (int i = 0; i < s2.length(); i++) {
            string s;
            while (i < s2.length() && s2[i] != ' ') {
                s += s2[i];
                i++;
            }
            f[s]++;
         
        }
        vector<string>v;
        for(auto it : f){
            if(it.second == 1){
                v.push_back(it.first);
            }
        }
        return v;
    }
};