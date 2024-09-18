class Solution {
public:
    int arrangeCoins(int n) {
        long long int i = 0;
        for(; (i * (i + 1))/ 2 < n ; i++){

        }
        if((i *(i +1)/2) == n)return (int)i;
        return (int)(i) - 1;
    }
};