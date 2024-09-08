class Solution {
public:
    int hammingDistance(int x, int y) {
        vector<int> x1, y1;
        
        // Convert x to binary
        while (x > 0 || y > 0) {
            x1.push_back(x % 2);
            y1.push_back(y % 2);
            x /= 2;
            y /= 2;
        }
        
        int count = 0;
        for (int i = 0; i < x1.size(); ++i) {
            if (x1[i] != y1[i]) count++;
        }
        
        return count;
    }
};
