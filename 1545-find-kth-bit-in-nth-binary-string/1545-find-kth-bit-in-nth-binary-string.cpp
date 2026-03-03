class Solution {
public:
    char findKthBit(int n, int k) {
        string s = "0";
        
        while(s.length() < k){
            string s1 = invert(s);
            reverse(s1.begin() , s1.end());
            s += "1" + s1 ;
           
        }
        return s[k - 1];
    }
    string invert(string s){
        for(int i = 0 ; i < s.length() ;i++){
         if(s[i] == '1')s[i] = '0';
         else s[i] = '1';
        }
        return s;
    }
};