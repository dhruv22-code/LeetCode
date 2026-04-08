class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        const int MOD = 1000000007;
        int ans = 0;

        for (int i = 0; i < queries.size(); i++) {
            int l = queries[i][0], r = queries[i][1];
            int k = queries[i][2], v = queries[i][3];
            
            for (int idx = l; idx <= r; idx += k) {
                nums[idx] = (1LL * nums[idx] * v) % MOD;
            }
        }

        for (int x : nums) ans ^= x;
        return ans;
    }
};
