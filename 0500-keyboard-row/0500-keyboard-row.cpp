class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        vector<char> s1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        vector<char> s2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        vector<char> s3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
        
        unordered_map<char, int> f1, f2, f3;
        
        // Fill maps f1, f2, and f3 with corresponding characters
        for (int i = 0; i < s1.size(); i++) {
            f1[s1[i]]++;  // s1 characters go into f1
        }
        for (int i = 0; i < s2.size(); i++) {
            f2[s2[i]]++;  // s2 characters go into f2
        }
        for (int i = 0; i < s3.size(); i++) {
            f3[s3[i]]++;  // s3 characters go into f3
        }
        
        // Check each word
        for (int i = 0; i < words.size(); i++) {
            if (f1.find(tolower(words[i][0])) != f1.end()) {
                bool b = true;
                for (int j = 1; j < words[i].size(); j++) {
                    if (f1.find(tolower(words[i][j])) == f1.end()) {
                        b = false;
                        break;
                    }
                }
                if (b) {
                    ans.push_back(words[i]);
                }
            } else if (f2.find(tolower(words[i][0])) != f2.end()) {
                bool b = true;
                for (int j = 1; j < words[i].size(); j++) {
                    if (f2.find(tolower(words[i][j])) == f2.end()) {
                        b = false;
                        break;
                    }
                }
                if (b) {
                    ans.push_back(words[i]);
                }
            } else if (f3.find(tolower(words[i][0])) != f3.end()) {
                bool b = true;
                for (int j = 1; j < words[i].size(); j++) {
                    if (f3.find(tolower(words[i][j])) == f3.end()) {
                        b = false;
                        break;
                    }
                }
                if (b) {
                    ans.push_back(words[i]);
                }
            }
        }
        return ans;
    }
};
