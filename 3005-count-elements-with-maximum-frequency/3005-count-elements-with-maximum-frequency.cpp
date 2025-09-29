class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> f;
        for (int x : nums) f[x]++;

        int maxi = 0, ans = 0;
        for (auto it : f) {
            maxi = max(maxi, it.second);
        }
        for (auto it : f) {
            if (it.second == maxi) ans += it.second;
        }
        return ans;
    }
};
