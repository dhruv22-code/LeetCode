class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        const int MOD = 1e9 + 7;
        vector<long long> powers;
        
        int bit = 0;
        while (n > 0) {
            if (n & 1) powers.push_back(1LL << bit);
            n >>= 1;
            bit++;
        }
        
        vector<long long> pref(powers.size());
        pref[0] = powers[0] % MOD;
        for (int i = 1; i < powers.size(); i++) {
            pref[i] = (pref[i - 1] * powers[i]) % MOD;
        }
        
        vector<int> ans;
        for (auto &q : queries) {
            int l = q[0], r = q[1];
            long long prod = pref[r];
            if (l > 0) {
                long long inv = modPow(pref[l - 1], MOD - 2, MOD);
                prod = (prod * inv) % MOD;
            }
            ans.push_back((int)prod);
        }
        
        return ans;
    }
    
    long long modPow(long long base, long long exp, int MOD) {
        long long res = 1;
        while (exp > 0) {
            if (exp & 1) res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp >>= 1;
        }
        return res;
    }
};
