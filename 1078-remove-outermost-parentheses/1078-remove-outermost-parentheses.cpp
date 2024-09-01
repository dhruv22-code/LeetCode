class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;

        for (int i = 0; i < s.length(); i++) {
            int j = i;
            int count = 0;
            for (; i < s.length(); i++) {
                if (s[i] == '(')
                    count++;
                else
                    count--;
                if (count == 0)
                    break;
            }
            for (int k = j + 1; k < i; k++) {
                ans += s[k];
            }
        }
        return ans;
    }
};