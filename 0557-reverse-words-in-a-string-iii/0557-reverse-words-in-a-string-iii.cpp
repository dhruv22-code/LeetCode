class Solution {
public:
    string reverseWords(string s) {
        for (int i = 0; i < s.length();) {
            if (s[i] != ' ') {
                int j = i;
                for (; j < s.length() && s[j] != ' '; j++) {
                }
                reverse(s.begin() + i, s.begin()  + j);
                i = j;

            } else
                i++;
        }
        return s;
    }
};