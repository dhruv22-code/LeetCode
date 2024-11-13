class Solution {
public:
    string reverseStr(string s, int k) {
        int count = s.length()/(2 * k);
        int j = 0;
        for(int i = 0 ; i < count ; i++){
            reverse(s.begin() + j, s.begin() + k + j);
            j = j + 2 * k;
        }
        if(s.length() - j < k){
            reverse(s.begin() + j, s.end());
        }else if(s.length() - j < 2*k && s.length() - j >= k){
            reverse(s.begin() + j, s.begin() + j + k);
        }
        return s;
    }
};