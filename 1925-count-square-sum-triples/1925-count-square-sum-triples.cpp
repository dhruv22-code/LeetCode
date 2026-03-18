class Solution {
public:
    int countTriples(int n) {
        int ans = 0;
        for(int c = n ; c >= 1; c--){
            for(int b =1 ; b <= c ; b++){
                if(sqrt(c * c - b * b ) != 0 && (sqrt(c * c - b * b ) - (int)sqrt(c * c - b * b )) == 0   )ans++;
            }
        }
        return ans;

    }
};