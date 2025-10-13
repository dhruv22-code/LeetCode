class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        for(int i = 0 ; i < words.size() ;){
            string s1 = words[i];
            sort(s1.begin(), s1.end());
            if(i > 0 ){
                string s2 = words[i - 1];
                sort(s2.begin(), s2.end());
                if(s1 == s2)
                words.erase(words.begin() + i);
                else i++;
            }else{
                i++;
            }
        }
        return words;
    }
};