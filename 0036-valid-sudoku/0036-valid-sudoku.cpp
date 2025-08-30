class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();

        for (int i = 0; i < n; i++) {
            unordered_set<char> s;
            for (int j = 0; j < n; j++) {
                if (board[i][j] == '.') continue;
                if (s.count(board[i][j])) return false;
                s.insert(board[i][j]);
            }
        }

        for (int j = 0; j < n; j++) {
            unordered_set<char> s;
            for (int i = 0; i < n; i++) {
                if (board[i][j] == '.') continue;
                if (s.count(board[i][j])) return false;
                s.insert(board[i][j]);
            }
        }

        for (int row = 0; row < n; row += 3) {
            for (int col = 0; col < n; col += 3) {
                unordered_set<char> s;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char c = board[row + i][col + j];
                        if (c == '.') continue;
                        if (s.count(c)) return false;
                        s.insert(c);
                    }
                }
            }
        }

        return true;
    }
};
