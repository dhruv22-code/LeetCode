class Solution {
public:
    int maximizeSquareHoleArea(int n, int m, vector<int>& hBars, vector<int>& vBars) {
        sort(hBars.begin(), hBars.end());
        sort(vBars.begin(), vBars.end());
        int len = 2,len1 = 2; 
        for (int i = 0; i < hBars.size(); i++) {
            int j = i;
            while (i < hBars.size() - 1 && hBars[i] + 1 == hBars[i + 1]) {
                i++;
            }
            len = max(len, hBars[i] - hBars[j] + 2);
        }

        for (int i = 0; i < vBars.size(); i++) {
            int j = i;
            while (i < vBars.size() - 1 && vBars[i] + 1 == vBars[i + 1]) {
                i++;
            }
            len1 = max(len1, vBars[i] - vBars[j] + 2);
        }

        int mini = min(len, len1);
        return mini * mini;
    }
};