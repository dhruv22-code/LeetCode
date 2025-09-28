class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double ans = -1;  
        for(int i = 0 ; i < points.size() ; i++){
            for(int j = i + 1; j < points.size() ; j++){
                for(int k = j + 1; k < points.size() ; k++){
                
                    double a = sqrt(pow(points[i][0] - points[j][0],2)+pow(points[i][1] - points[j][1], 2));
                    double b = sqrt(pow(points[i][0] - points[k][0],2)+pow(points[i][1] - points[k][1], 2));
                    double c = sqrt(pow(points[j][0] - points[k][0],2)+pow(points[j][1] - points[k][1], 2));
                    double s = (a + b + c)/2;
                    ans = max(ans, sqrt(s*(s - a)*(s- b)*(s - c)));
                }
            }
        }
        return ans;
    }
};