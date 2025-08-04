class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, pro = 1, n1 = n;
        while(n > 0){
            sum += n % 10;
            pro = pro * (n % 10) ;
            n = n /10;
        }
        return n1 % (sum + pro) == 0? true: false;
    }
};