class Solution {
public:
    int characterReplacement(string s, int k) {
        int i  =0, j = 0, longest = 0;
        char c = 'A', c1 = 'B';
        int k1 = k;
        while(j < s.length()){
            if(s[j] == c){
                longest = max(longest, j - i + 1);
                j++;
            }else{
                if(k1 > 0){
                    longest = max(longest, j - i + 1);
                    j++;
                    k1--;
                }else{
                    if(s[i] != c){
                        i++;
                        k1++;
                    }else{
                        i++;
                    }
                }
            }
        }
        i = 0, j = 0, k1 = k;
         while(j < s.length()){
            if(s[j] == c1){
                longest = max(longest, j - i + 1);
                j++;
            }else{
                if(k1 > 0){
                    longest = max(longest, j - i + 1);
                    j++;
                    k1--;
                }else{
                    if(s[i] != c1){
                        i++;
                        k1++;
                    }else{
                        i++;
                    }
                }
            }
        }
        return longest;
    }
};