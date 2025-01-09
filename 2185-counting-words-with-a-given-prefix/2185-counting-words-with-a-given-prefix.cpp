class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
      for(int i = 0 ; i < words.size() ; i++)  {
        for(int j = 0 ; j < words[i].length() ; j++){
            if(words[i][j] != pref[j]){
                break;
            }else if(j == pref.length() - 1){
                count++;
                break;
            }
            
        }
      }
      return count;
    }
};