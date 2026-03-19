class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans = 0;
        for(int i = 0 ; i < strs[0].length() ; i++){
            bool b = false;
            for(int j = 0 ; j < strs.size() - 1 ; j++){
                if(strs[j][i] > strs[j + 1][i]){
                    b = !b;
                    break;
                }
            }
            if(b){
                ans++;
            }
        }
        return ans;
    }
};