class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum = n*(n + 1)/2;
        int ans = 0;
        for(int i = 1 ; m * i <= n ; i++){
            ans += m * i;
        }
        return sum - 2 * ans;
    }
};