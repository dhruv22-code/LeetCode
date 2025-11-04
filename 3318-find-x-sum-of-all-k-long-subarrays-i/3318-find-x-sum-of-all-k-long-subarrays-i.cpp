class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int> ans;
        int n = nums.size();

        for (int j = 0; j <= n - k; j++) {
            unordered_map<int, int> freq;
            for (int i = j; i < j + k; i++) freq[nums[i]]++;
            
            vector<pair<int, int>> p;
            for (auto &it : freq) p.push_back({it.second, it.first});
            sort(p.begin(), p.end());

            int sum = 0, cnt = 0;
            for (int i = p.size() - 1; i >= 0 && cnt < x; i--, cnt++)
                sum += p[i].first * p[i].second;

            ans.push_back(sum);
        }
        return ans;
    }
};
