class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int, int>>v(points.size());
        vector<vector<int>>points1(k);
     
        for(int i  =0 ; i < points.size(); i++){
            v[i] = {points[i][0] * points[i][0] + points[i][1] * points[i][1], i};

        }
        sort(v.begin(), v.end());
        for(int i = 0; i < k ; i++){
            points1[i] = points[v[i].second];
        }
       return points1;
    }
};