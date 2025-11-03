#include <bits/stdc++.h>
using namespace std;

struct PairHash {
    size_t operator()(const pair<int,int>& p) const {
        return hash<long long>()(((long long)p.first << 32) ^ p.second);
    }
};

class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m, vector<int>(n, 0));

        unordered_set<pair<int,int>, PairHash> g;
        unordered_set<pair<int,int>, PairHash> w;
        unordered_set<pair<int,int>, PairHash> ans;

        // Mark walls
        for (int i = 0; i < walls.size(); i++) {
            w.insert({walls[i][0], walls[i][1]});
            grid[walls[i][0]][walls[i][1]] = -1;
        }

        // Mark guards
        for (int i = 0; i < guards.size(); i++) {
            g.insert({guards[i][0], guards[i][1]});
            grid[guards[i][0]][guards[i][1]] = -1;
        }

        // Spread visibility for each guard
        for (int i = 0; i < guards.size(); i++) {
            int x = guards[i][0], y = guards[i][1];

            int x1 = x, y1 = y;
            // Up
            while (x1 - 1 >= 0 && g.find({x1 - 1, y}) == g.end() && w.find({x1 - 1, y}) == w.end()) {
                x1--;
                ans.insert({x1, y});
            }

            x1 = x;
            // Down
            while (x1 + 1 < m && g.find({x1 + 1, y}) == g.end() && w.find({x1 + 1, y}) == w.end()) {
                x1++;
                ans.insert({x1, y});
            }

            y1 = y;
            // Left
            while (y1 - 1 >= 0 && g.find({x, y1 - 1}) == g.end() && w.find({x, y1 - 1}) == w.end()) {
                y1--;
                ans.insert({x, y1});
            }

            y1 = y;
            // Right
            while (y1 + 1 < n && g.find({x, y1 + 1}) == g.end() && w.find({x, y1 + 1}) == w.end()) {
                y1++;
                ans.insert({x, y1});
            }
        }

        return m * n - (walls.size() + guards.size() + ans.size());
    }
};
