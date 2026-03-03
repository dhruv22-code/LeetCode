class Solution {
public:
    bool hasAlternatingBits(int n) {
       string s =  bitset<8>(n).to_string();
       int i = 0;
        while(s[i] == '0')i++;
       
       for(int j = i ; j < s.length() - 1; j++){
        if(s[j] == s[j + 1])return false;
       }
       return true;
    }
};