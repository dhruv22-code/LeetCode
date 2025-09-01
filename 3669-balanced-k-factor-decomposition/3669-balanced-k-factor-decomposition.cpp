class Solution {
public:
    vector<int> best;
    int bestDiff = INT_MAX;

    void dfs(int n, int k, vector<int>& curr) {
        if (k == 1) {
            curr.push_back(n);   
            int mx = *max_element(curr.begin(), curr.end());
            int mn = *min_element(curr.begin(), curr.end());
            int diff = mx - mn;
            if (diff < bestDiff) {
                bestDiff = diff;
                best = curr;
            }
            curr.pop_back();
            return;
        }

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) { 
                curr.push_back(i);
                dfs(n / i, k - 1, curr);
                curr.pop_back();

                if (i != n / i) {
                    curr.push_back(n / i);
                    dfs(i, k - 1, curr);
                    curr.pop_back();
                }
            }
        }
    }

    vector<int> minDifference(int n, int k) {
        vector<int> curr;
        dfs(n, k, curr);
        return best;
    }
};
