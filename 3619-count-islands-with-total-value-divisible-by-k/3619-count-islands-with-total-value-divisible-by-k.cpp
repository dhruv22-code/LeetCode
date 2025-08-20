class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> visited(m, vector<int>(n, 0));
        int count = 0;
        
        // 4 directions (up, down, left, right)
        vector<int> dx = {1, -1, 0, 0};
        vector<int> dy = {0, 0, 1, -1};
        
        auto bfs = [&](int i, int j) {
            queue<pair<int,int>> q;
            q.push({i, j});
            visited[i][j] = 1;
            long long sum = 0;
            
            while(!q.empty()) {
                auto [x, y] = q.front();
                q.pop();
                sum += grid[x][y];
                
                for(int d = 0; d < 4; d++) {
                    int nx = x + dx[d], ny = y + dy[d];
                    if(nx >= 0 && nx < m && ny >= 0 && ny < n && 
                       grid[nx][ny] > 0 && !visited[nx][ny]) {
                        visited[nx][ny] = 1;
                        q.push({nx, ny});
                    }
                }
            }
            return sum;
        };
        
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] > 0 && !visited[i][j]) {
                    long long total = bfs(i, j);
                    if(total % k == 0) count++;
                }
            }
        }
        
        return count;
    }
};
