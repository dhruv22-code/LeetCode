class Solution {
public:
    int countBinarySubstrings(string s) {
        int count1 = 0, bef = 0, i = 0, ans = 0;
        while(i < s.length()){
            while(i < s.length() - 1 && s[i + 1] == s[i]){
                count1++;
                i++;
            }
            i++;
            count1++;
            ans += min(bef, count1);
            bef = count1;
            count1 = 0;
            
           
        }
        return ans;
    }
};