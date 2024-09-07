class Solution {
public:
const int MOD =1e9 + 7; 
long long int modExp(long long int base, long long int exp, long long int mod){
    int result  = 1;
while(exp > 0){
    
    if(exp % 2 == 1){
        result = (result * base) % mod;
    }
    base = (base * base) % mod;
    exp /= 2;

}
return result;
}
    int countGoodNumbers(long long n) {
      long long int odd = n / 2;//choices == 4
       long long int even = n - odd;//chocies == 5
        long long int result =  (modExp(4, odd, MOD)*modExp(5, even, MOD))% MOD;
        return result;

    }
};