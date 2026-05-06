class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int r = 0;
        int n1 = n, ans = 0;
        while(n1 > 0){
            r = 10 * r + (n1 % 10);
            n1 /= 10;
        }
        int mini = min(r, n), maxi = max(r, n);
        for(int i = mini; i <= maxi; i++){
            if(isPrime(i))ans += i;
        }
        return ans;
    }
    bool isPrime(int n){
        if(n == 1)return false;
        for(int i = 2; i * i <= n ; i++){
            if(n % i == 0)return false;
        }
        return true;
    }
    
};