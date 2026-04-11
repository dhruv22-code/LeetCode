class Solution {
public:
    int mirrorFrequency(string s) {
        unordered_map<char, int>f;
        for(int i = 0 ; i < s.length(); i++){
            f[s[i]]++;
        }
        int ans = 0;
        for(int i = 0 ; i < s.length(); i++){
            if(f[s[i]] == 0)continue;
            if( s[i] >= 48 && s[i] <= 57){
                ans += abs(f[s[i]] - f[57 - (s[i] - 48)]);
                f[57 - (s[i] - 48)] = 0;
            }else {
                ans += abs(f[s[i]] - f[122 - (s[i] - 97)]);
                f[122 - (s[i] - 97)] = 0;
            }
            f[s[i]] = 0;

        }
        return ans;

    }
};