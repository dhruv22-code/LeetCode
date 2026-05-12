class Solution {
public:

    vector<vector<int>> dp;

    int maximumJumps(vector<int>& nums, int target) {

        dp.assign(1001, vector<int>(1001, -2));

        return solve(nums, 1, 0, target);
    }

    int solve(vector<int>& nums, int i,
              int prev, int target) {

        if(i == nums.size()) {

            if(abs((long long)nums[i - 1] - nums[prev]) <= target)
                return 0;

            return -1;
        }

        if(dp[i][prev] != -2)
            return dp[i][prev];

        int ans = -1;

        if(abs((long long)nums[i] - nums[prev]) <= target) {

            int take = solve(nums, i + 1,
                             i, target);

            if(take != -1)
                ans = max(ans, 1 + take);
        }

        int nottake = solve(nums, i + 1,
                            prev, target);

        ans = max(ans, nottake);

        return dp[i][prev] = ans;
    }
};