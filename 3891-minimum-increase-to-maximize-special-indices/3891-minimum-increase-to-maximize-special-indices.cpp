class Solution {
public:
    long long minIncrease(vector<int>& nums) {
        int n = nums.size();

        long long ans = 0;

        vector<long long> odd_pref(n, 0);
        for (int i = 1; i < n - 1; i += 2) {
            if (nums[i] <= max(nums[i - 1], nums[i + 1])) {
                ans += (max(nums[i - 1], nums[i + 1]) - nums[i] + 1);
            }
            odd_pref[i] = ans;
        }
        if (n & 1) return ans;

        long long temp = 0;
        vector<long long> even_suff(n, 0);

        for (int i = n - 2; i > 0; i -= 2) {
            if (nums[i] <= max(nums[i - 1], nums[i + 1])) {
                temp += (max(nums[i - 1], nums[i + 1]) - nums[i] + 1);
            }
            even_suff[i] = temp;
        }

        ans = min(ans, temp);

        // try splitting
        for (int i = 2; i < n - 2; i += 2) {
            ans = min(ans, odd_pref[i - 1] + even_suff[i + 2]);
        }

        return ans;
    }
};