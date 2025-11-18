class Solution {
public:
    const int mod = 1000000007;
    int numSub(string s) {
        long long ans = 0;
        for(int i = 0 ; i < s.length() ; i++){
            int j = i;
            while(j < s.length() && s[j] == '1')j++;
            if((j - i) % 2== 0){
                ans += (long long )((j - i)/2)*(j- i + 1)%mod;
               
            } else ans += (long long )((j - i) % mod)*((j- i + 1)/2);
            i = j;

        }
        return (int)ans;
        }
};