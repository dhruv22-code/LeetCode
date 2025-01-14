class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int ans = 0;
        for(int i = 0 ; i < words.size() ; i++){
            for(int j = i + 1; j < words.size(); j++){
                if(isPrefixAndSuffix(words[i], words[j])){
                    ans++;
                }
            }
        }
        return ans;
    }
    bool isPrefixAndSuffix(string s1,string s2){
        if(s2.length() < s1.length())return false;
        for(int i = 0 ; i < s1.length(); i++){
            if(s1[i] != s2[i])return false;
        }
        
        for(int i = s1.length() - 1, j = s2.length() -1 ; i >= 0; i--, j--){
            if(s1[i] != s2[j])return false;
        
        }
        return true;
        
    }

};