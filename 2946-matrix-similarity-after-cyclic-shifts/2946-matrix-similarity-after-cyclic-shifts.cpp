class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        k = k % mat[0].size();
        for(int i = 0 ; i < mat.size(); i++ ){
            for(int j = 0; j <= k ;j++){
                if(mat[i][j] != mat[i][(j + k)%mat[0].size()])return false;
            }
        }
        return true;
    }
};
