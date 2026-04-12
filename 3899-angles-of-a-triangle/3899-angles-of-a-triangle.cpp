class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {
        int a = sides[0], b = sides[1], c = sides[2];

        if (a + b <= c || a + c <= b || b + c <= a) return {};
        auto angle = [&](double x, double y, double z) {
            double val = (x*x + y*y - z*z) / (2*x*y);
           
            return acos(val) * 180.0 / M_PI;
        };

        double A = angle(b, c, a);
        double B = angle(a, c, b);
        double C = angle(a, b, c);

        vector<double> ans = {A, B, C};
        sort(ans.begin(), ans.end());

        return ans;
    }
};