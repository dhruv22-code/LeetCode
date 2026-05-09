class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        unordered_map<int, int> f;
        set<int> s;

        for (int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
            f[nums[i]]++;
        }

        vector<int> v(s.begin(), s.end());

        for (int i = 0; i < v.size(); i++) {
            for (int j = i + 1; j < v.size(); j++) {
                if (f[v[i]] != f[v[j]]) {
                    return {v[i], v[j]};
                }
            }
        }

        return {-1, -1};
    }
};