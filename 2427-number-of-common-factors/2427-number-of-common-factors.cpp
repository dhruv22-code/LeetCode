class Solution {
public:
    int commonFactors(int a, int b) {
        int ans = 0;
        int x = min(a, b);
        while(x > 0){
            if(a  % x == 0 && b % x == 0)ans++;
            x--;
        }
        return ans;

    }
};