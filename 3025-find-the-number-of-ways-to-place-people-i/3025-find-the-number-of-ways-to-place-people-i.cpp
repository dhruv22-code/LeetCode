class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int ans = 0;
        int n = points.size();

        for (int i = 0; i < n; i++) {
            auto& pointA = points[i];
            for (int j = 0; j < n; j++) {
                vector<int> pointB = points[j];
                if (i == j ||
                    !(pointA[0] <= pointB[0] && pointA[1] >= pointB[1])) {
                    continue;
                }
                if (n == 2) {
                    ans++;
                    continue;
                }

                bool b = false;
                for (int k = 0; k < n; k++) {
                    if (k == i || k == j) {
                        continue;
                    }

                    auto& pointTmp = points[k];
                    bool X =
                        pointTmp[0] >= pointA[0] && pointTmp[0] <= pointB[0];
                    bool Y =
                        pointTmp[1] <= pointA[1] && pointTmp[1] >= pointB[1];
                    if (X && Y) {
                        b = true;
                        break;
                    }
                }
                if (!b) {
                    ans++;
                }
            }
        }
        return ans;
    }
};