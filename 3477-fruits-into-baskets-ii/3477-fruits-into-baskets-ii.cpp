class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int ans = 0;
        for (int i = 0; i < fruits.size(); i++) {
            auto it = lower_bound(baskets.begin(), baskets.end(), fruits[i]);
            if (it != baskets.end()) {
                baskets[it - baskets.begin()] = -1;
                ans++;
            }
        }
        return baskets.size() - ans;
    }
};