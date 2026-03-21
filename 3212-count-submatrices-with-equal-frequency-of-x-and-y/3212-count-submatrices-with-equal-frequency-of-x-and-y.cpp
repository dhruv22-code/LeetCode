class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
        int ans = 0;
        vector<vector<int>>x(grid.size(), vector<int>(grid[0].size(), 0));
        vector<vector<int>>pref(grid.size(), vector<int>(grid[0].size(), 0));
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                if(grid[i][j] == 'X'){
                    pref[i][j] += -1;
                    x[i][j] = 1 ;
                    }
                else if(grid[i][j] == 'Y')pref[i][j] += 1;
                if(i > 0){
                    pref[i][j] += pref[i - 1][j];
                    x[i][j] |= x[i - 1][j];
                }
                if(j > 0){
                    pref[i][j] += pref[i][j - 1];
                    x[i][j] |= x[i][j - 1];
                }
                if(i > 0 && j > 0){
                    pref[i][j] -= pref[i - 1][j - 1];
                    x[i][j] |= x[i - 1][j - 1];
                }
                if(pref[i][j] == 0 && x[i][j] > 0)ans++;
            }
            
        }
        return ans;
    }
};