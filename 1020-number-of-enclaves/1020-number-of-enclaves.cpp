class Solution {
public:
    void dfs(int row, int col, vector<vector<int>>& vis,
         vector<vector<int>>& grid, int& cnt) {
    vis[row][col] = 1;
    cnt++;

    int dr[4] = {-1, 0, 1, 0};
    int dc[4] = {0, 1, 0, -1};
    int n = grid.size(), m = grid[0].size();

    for (int k = 0; k < 4; k++) {
        int nrow = row + dr[k];
        int ncol = col + dc[k];
        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
            !vis[nrow][ncol] && grid[nrow][ncol] == 1) {
            dfs(nrow, ncol, vis, grid, cnt);
        }
    }
}

    int numEnclaves(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();
    int totalLand = 0, boundaryLand = 0;
    vector<vector<int>> vis(n, vector<int>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 1) totalLand++;
        }
    }

    for (int j = 0; j < m; j++) {
        if (!vis[0][j] && grid[0][j] == 1) {
            dfs(0, j, vis, grid, boundaryLand);
        }
        if (!vis[n - 1][j] && grid[n - 1][j] == 1) {
            dfs(n - 1, j, vis, grid, boundaryLand);
        }
    }
    for (int i = 0; i < n; i++) {
        if (!vis[i][0] && grid[i][0] == 1) {
            dfs(i, 0, vis, grid, boundaryLand);
        }
        if (!vis[i][m - 1] && grid[i][m - 1] == 1) {
            dfs(i, m - 1, vis, grid, boundaryLand);
        }
    }

    return totalLand - boundaryLand;
}

};