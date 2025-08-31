class Solution {
public:
    int climbStairs(int n) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (n == 2) return 2;
        
       
        int prev1 = 1, prev2 = 2;
        int count;
        
        
        for (int i = 3; i <= n; ++i) {
            count = prev1 + prev2;
            prev1 = prev2;
            prev2 = count;
        }
        
        return count;
    }
};
