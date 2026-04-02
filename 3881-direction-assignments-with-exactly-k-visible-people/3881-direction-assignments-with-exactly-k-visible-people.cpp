#include <vector>

using namespace std;

class Solution {
    long long MOD = 1e9 + 7;

    // Fast modular exponentiation (base^exp % MOD)
    long long power(long long base, long long exp) {
        long long res = 1;
        base %= MOD;
        while (exp > 0) {
            if (exp % 2 == 1) res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp /= 2;
        }
        return res;
    }

    // Modular inverse using Fermat's Little Theorem
    long long modInverse(long long n) {
        return power(n, MOD - 2);
    }

public:
    int countVisiblePeople(int n, int pos, int k) {
        // Base case: can't pick more people than available
        if (k > n - 1) return 0;

        // Precompute factorials up to n-1
        vector<long long> fact(n);
        fact[0] = 1;
        for (int i = 1; i < n; i++) {
            fact[i] = (fact[i - 1] * i) % MOD;
        }

        // Vandermonde's Identity simplifies the sum to (n-1)Ck
        // nCr = n! / (r! * (n-r)!)
        long long num = fact[n - 1];
        long long den = (fact[k] * fact[n - 1 - k]) % MOD;
        
        long long combinations = (num * modInverse(den)) % MOD;

        // The person at 'pos' can face either Left or Right (2 choices)
        // without affecting the count of visible people.
        return (int)((combinations * 2) % MOD);
    }
};
