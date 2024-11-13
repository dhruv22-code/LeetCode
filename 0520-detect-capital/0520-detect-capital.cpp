class Solution {
public:
    bool detectCapitalUse(string word) {
        if (isupper(word[0])) {
            int count = 1;
           for(int i = 1 ; i < word.length() ; i++){
            if(isupper(word[i]))count++;
           }
           if(count == word.length() || count == 1 )return true;
           return false;
        }
        for (int i = 1; i < word.length(); i++) {
            if (isupper(word[i]))
                return false;
        }
        return true;
    }
};