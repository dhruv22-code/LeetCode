#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    #define ll long long

    long long maximumTotalDamage(vector<int>& power) {
        ll n = power.size();
        sort(power.begin(), power.end());

        unordered_map<ll, ll> freq;
        for (int x : power) freq[x]++;

        vector<ll> val, total;
        for (auto &p : freq) val.push_back(p.first);
        sort(val.begin(), val.end());

        for (ll x : val) total.push_back(x * freq[x]);

        vector<ll> dp(val.size(), -1);

        return solve(dp, val.size() - 1, val, total);
    }

    ll solve(vector<ll>& dp, int i, vector<ll>& val, vector<ll>& total) {
        if (i < 0) return 0;           
        if (dp[i] != -1) return dp[i];  

        ll skip = solve(dp, i - 1, val, total);

        int j = i - 1;
        while (j >= 0 && val[i] - val[j] <= 2) j--;

        ll take = total[i] + solve(dp, j, val, total);

        return dp[i] = max(skip, take);
    }
};
