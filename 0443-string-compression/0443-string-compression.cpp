class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        string s;
        int count = 0;
        for (int i = 0; i < chars.size() ;) {
            int j = i;
            while (j < n && chars[i] == chars[j]) {
                j++;
            }
            if (j - i == 1)
                s += chars[i];
            else  {
                s += chars[i];
                // if (j - i >= 10) {
                //     int num = j - i, sum = 0;
                //     while (num > 0) {
                //         sum = (num % 10) + sum * 10;
                //         num = num / 10;
                //     }
                //     while (sum > 0) {
                //         s += (num % 10) + '0';
                //     }
                // }
                string s1 = to_string(j - i);
                s+=s1 ;
            }
            i = j;
        }
        for (int i = 0; i < s.length(); i++) {
            chars[i] = s[i];
        }
        return s.length();
    }
};
