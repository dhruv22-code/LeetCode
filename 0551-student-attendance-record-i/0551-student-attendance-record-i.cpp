class Solution {
public:
    bool checkRecord(string s) {
        int abs = 0;
        int cons = 0;
        for(int i  =0 ; i < s.length() ; i++){
            if(s[i] == 'A')abs++;
            else if(i > 0 && s[i] == 'L' && s[i -1 ] == 'L')cons++;
            else cons = 0;
            if(abs >= 2 || cons == 2)return false;
        }
        return true;
    }
};