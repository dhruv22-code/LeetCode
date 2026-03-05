class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int ans = 0;
        unordered_map<int, int>col, row;
        for(int i = 0 ; i < mat.size() ; i++){
            int count = 0;
            for(int j = 0 ; j < mat[0].size() ; j++){
                if(mat[i][j] == 1){
                  col[j]++;
                  count++;
                }
                    
                
            }
                  row[i] = count;  
        }
        for(int i = 0 ; i < mat.size() ; i++){
            for(int j = 0 ; j < mat[0].size() ; j++){
                if(mat[i][j] == 1 && row[i] == 1 && col[j] == 1){
                 ans++;
                }
                
                
            }
        }

        return ans;
    }
};