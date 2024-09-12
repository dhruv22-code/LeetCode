class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_map<char, int>f;
        for(int i = 0 ; i < allowed.length() ; i++){
            f[allowed[i]]++;

        }
        int count = 0;
        for(int i = 0 ; i < words.size() ; i++){
            bool b = true;
            for(int j = 0 ; j < words[i].length(); j++){
                if(f[words[i][j]] <= 0){
                    b = false;
                    break;
                }
            }
            if(b)count++;
        }
        return count;
    }
};