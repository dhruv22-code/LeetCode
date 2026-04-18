class Solution {
public:
    int mirrorDistance(int n) {
        return abs(n - rev(n));
    }
    int rev(int n ){
        int a = 0;
        while(n > 0){
            a = 10 * a + (n % 10);
            n /= 10;
        }
        return a;
    }
};