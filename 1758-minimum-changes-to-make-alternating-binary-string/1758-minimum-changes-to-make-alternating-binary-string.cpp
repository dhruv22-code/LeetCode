class Solution {
public:
    int minOperations(string s) {
        int ans = 0;

        for(int i = 0 ; i < s.length() ; i++){
            if(i % 2 == 0){
                if(s[i] != '0')ans++;
            }else{
                if(s[i] != '1')ans++;
            }
        }
        return min(ans, (int)s.length() - ans);
    }
};