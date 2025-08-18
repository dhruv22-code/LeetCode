class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<vector<int>>grid1 = grid;
        int count =  0;
        bool b = false;
        while(1){
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j = 0; j < grid[i].size() ; j++){
                if(grid[i][j] == 2){
                    if(i - 1 >= 0 ){
                        if(grid1[i - 1][j])
                        grid1[i - 1][j] = 2;
                    }
                    if(i + 1 < grid.size()){
                        if(grid1[i + 1][j])
                        grid1[i + 1][j] = 2;
                    }if(j + 1 < grid[0].size()){
                         if(grid1[i][j + 1])
                        grid1[i][j +1] = 2;
                    }if(j - 1>= 0){
                         if(grid1[i][j - 1])
                        grid1[i][j - 1] =2;
                    }
                }
            }
        }
        if(grid == grid1){
         
            break;
        }
        grid = grid1;
        count++;
    }

        for(int i = 0 ;i < grid.size() ; i++){
            for(int j = 0 ; j < grid[0].size() ; j++){
                if(grid[i][j] == 1)return -1;
            }
        }
        return count;
    }
};