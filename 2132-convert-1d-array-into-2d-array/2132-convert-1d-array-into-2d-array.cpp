class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if (original.size() != m * n)
            return {};
        vector<vector<int>> v;
        int j = 0;
        for (int i = 0; i < original.size();) {
            vector<int> v1;

            j = i;
            for (; j - i < n; j++) {
                v1.push_back(original[j]);
            }
            v.push_back(v1);
            i = j;
        }
        return v;
    }
};