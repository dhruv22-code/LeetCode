class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int y = INT_MAX, ans = 0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] < 0) {
                    if (y == INT_MAX) {
                        ans += (grid[0].size() - j) * (grid.size() - i);
                        y = j;
                    } else {
                        if (j < y) {
                            ans += (y - j) * (grid.size() - i);
                            y = j;
                        }
                    }
                }
            }
        }
        return ans;
    }
};