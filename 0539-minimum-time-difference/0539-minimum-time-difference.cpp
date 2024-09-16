class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int mini = INT_MAX;
        vector<int> v(timePoints.size(), 0);
        for (int i = 0; i < timePoints.size(); i++) {

            timePoints[i].erase(2, 1);
            v[i] =
                ((timePoints[i][0] - '0') * 10 + timePoints[i][1] - '0') * 60 +
                ((timePoints[i][2] - '0') * 10 + timePoints[i][3] - '0');
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < timePoints.size() - 1; i++) {
            int c = min(abs(v[i] - v[i + 1]), abs(1440 - abs(v[i] - v[i + 1])));
            mini = min(mini, c);
        }

        mini = min(mini, abs(v[timePoints.size() - 1] - v[0]));
        return min(mini, abs(1440 - abs(v[timePoints.size() - 1] - v[0])));
    }
};