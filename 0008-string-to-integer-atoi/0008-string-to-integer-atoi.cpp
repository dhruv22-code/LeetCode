class Solution {
public:
    int myAtoi(string s) {
        bool b = false;
        bool c = false;
        int a = 1;
        int i = 0;
         for (; i < s.length(); i++) {
            if (s[i] == ' ')
                continue;
            else
                break;
        }
        for (; i < s.length() && (s[i] == '-' || s[i] == '+');) {
            if (s[i] == '-')
                a = -1;
            b = true;
            i++;
            break;
        }
        int res = 0;
        if (isdigit(s[i])) {
            for (; i < s.length() && !b && isdigit(s[i]); i++) {

                res = res * 10 + (s[i] - '0');
                c = true;
            }
            if(c)
            return res;
        }
        for(; i < s.length() && isdigit(s[i]);i++){
            res  = res*10 + (s[i] - '0');
        }
        return res * a;
    }
};