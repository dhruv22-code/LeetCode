class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<int, int>f;
        int v =0 ,c = 0;
        for(int i =  0; i < s.length() ; i++){
            f[s[i]]++;
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                v = max(v, f[s[i]]);
            }else{
                c = max(c, f[s[i]]);
            }

        }
        return v + c;
        
    }
};