class Solution {
public:
    bool checkOnesSegment(string s) {
        int i  =0, j = s.length() - 1;
        while(s[i] == '0')i++;
        while(s[j] == '0' )j--;
        for(int k = i; k  <= j ; k++){
            if(s[k] == '0')return false;
        }
        return true;
    }
};