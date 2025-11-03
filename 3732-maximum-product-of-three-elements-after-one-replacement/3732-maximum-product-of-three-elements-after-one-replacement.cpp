class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long n = nums.size();
        long long a = (long long)nums[n - 1] * nums[n - 2];
        long long b = (long long)nums[n - 1] * nums[0];
        long long c = (long long)nums[0] * nums[1];
        long long ans = max({abs(a), abs(b), abs(c)}) * 100000;
        return ans;
    }
};
