class Solution {
public:
    int makeTheIntegerZero(int num1, int num2) {
        for (long long k = 1; k <= 60; k++) {  
            long long target = 1LL * num1 - 1LL * num2 * k;
            if (target < 0) continue;
            
            int bits = __builtin_popcountll(target);
            if (bits <= k && k <= target) {
                return (int)k;
            }
        }
        return -1;
    }
};
