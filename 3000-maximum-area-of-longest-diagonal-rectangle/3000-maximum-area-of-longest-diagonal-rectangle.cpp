class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxs = INT_MIN;
        int pro = INT_MIN;
        for (int i = 0; i < dimensions.size(); i++) {
            maxs = max(maxs, (dimensions[i][1] + dimensions[i][0]) *
                                     (dimensions[i][1] + dimensions[i][0]) -
                                 2 * dimensions[i][1] * dimensions[i][0]);
            if (maxs == (dimensions[i][1] + dimensions[i][0]) *
                                (dimensions[i][1] + dimensions[i][0]) -
                            2 * dimensions[i][1] * dimensions[i][0]) {
                pro = max(pro, dimensions[i][1] *dimensions[i][0]);
            }
        }

        return pro;
    }
};