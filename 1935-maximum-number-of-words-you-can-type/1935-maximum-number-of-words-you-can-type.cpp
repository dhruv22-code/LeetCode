class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<int, int>f;
        for(int i = 0 ;  i< brokenLetters.size() ; i++){
            f[brokenLetters[i]]++;
        }
      int count = 0;
        for(int i = 0 ; i < text.size() ; i++){
            bool b = true;
            int j= i ;
            for(; j < text.size() && text[j] != ' '; j++){
                if(f.find(text[j]) != f.end()){
                    b = false;
                }
            }
            i = j;
            if(b)count++;
        }
        return count;
    }
};