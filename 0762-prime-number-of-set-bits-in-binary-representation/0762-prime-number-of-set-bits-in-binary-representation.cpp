class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int count = 0;
        for(int i = left; i <= right ; i++){
            if(isPrime(__builtin_popcount(i)))count++;
        }
        return count;
    }
    bool isPrime(int num){
        if(num == 0 || num == 1)return false;
        for(int i = 2 ; i*i <= num; i++){
            if(num % i == 0)return false;
        }
        return true;
    }
};