class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        long long sum = 0;
        vector<long long>col(grid[0].size()), row(grid.size());
        for(int i = 0 ; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                sum += grid[i][j];
            }
        }
        for(int i = 0; i < grid[0].size(); i++){
            long long sum1 = 0;
            for(int j = 0; j < grid.size(); j++){
               sum1 +=  grid[j][i] ;
            }
            col[i] = sum1 + (i > 0 ? col[i - 1] : 0);
            if(col[i] == sum - col[i])return true;
            if(col[i] > sum - col[i])break;
            
        }
        for(int i = 0; i < grid.size(); i++){
            long long sum1 = 0;
            for(int j = 0; j < grid[0].size(); j++){
               sum1 +=  grid[i][j] ;
            }
            row[i] = sum1 + (i > 0 ? row[i - 1] : 0);
            if(row[i] == sum - row[i])return true;
            if(row[i] > sum - row[i])break;
        }
        return false;


    }
};