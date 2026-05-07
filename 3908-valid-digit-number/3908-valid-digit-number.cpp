class Solution {
public:
    bool validDigit(int n, int x) {
        bool b = false;
        while(n > 0){
            if(n % 10 == x ){
                if(n / 10 == 0 )return false;
                else b = true;
            }
            n /= 10;
        }
        return b;
    }
};