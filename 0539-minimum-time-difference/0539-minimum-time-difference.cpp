class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int mini = INT_MAX;
        for(int i = 0 ; i < timePoints.size(); i++){
            for(int j = i + 1; j < timePoints.size() ; j++){
                if(timePoints[i][2] == ':')
                timePoints[i].erase(2, 1);
                if(timePoints[j][2] == ':')
                timePoints[j].erase(2, 1);
                int a = ((timePoints[i][0] - '0') * 10 + timePoints[i][1] - '0')* 60 + ((timePoints[i][2] - '0') * 10 + timePoints[i][3] - '0');
                int b = ((timePoints[j][0] - '0') * 10 + timePoints[j][1] - '0')* 60 + ((timePoints[j][2] - '0') * 10 + timePoints[j][3] - '0');

                int c= min(abs(a - b), abs(1440 - abs(a- b)));
                
                mini = min(mini, c);
            }
        }
        return mini;
    }
};