class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        long long prefix = 0, ans = LLONG_MIN;

        vector<long long> minPref(k, LLONG_MAX);
        minPref[k - 1] = 0;

        for(int i = 0; i < nums.size(); i++){
            prefix += nums[i];

            if(minPref[i % k] != LLONG_MAX)
                ans = max(ans, prefix - minPref[i % k]);

            minPref[i % k] = min(minPref[i % k], prefix);
        }

        return ans;
    }
};