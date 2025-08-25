class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int total = m * n;
        vector<int> v;
        v.reserve(total);

        int i = 0, j = 0, sum = 0, count = 0;

        while (count < total) {
            while (i >= 0 && j >= 0 && i < m && j < n && i + j == sum) {
                v.push_back(mat[i][j]);
                count++;
                if (sum % 2 == 0) { 
                    i--; j++;
                } else {           
                    i++; j--;
                }
            }

            if (sum % 2 == 0) {
                if (i < 0 && j < n) i = 0;   
                else if (j >= n) { i += 2; j = n - 1; } 
            } else {
                if (j < 0 && i < m) j = 0;   
                else if (i >= m) { j += 2; i = m - 1; }
            }

            sum++;
        }
        return v;
    }
};
