class Solution {
public:
    int longestBalanced(string s) {
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            unordered_map <int, int > f;
            int count = 0, maxi = 0;
            for (int j = i; j < s.length(); j++) {
                if (f[s[j]] == 0) {
                    count++;
                }
                f[s[j]]++;
                maxi = max(maxi, f[s[j]]);
                if (maxi * count == j - i + 1)
                    ans = max(ans, j - i + 1);
            }
        }
        return ans;
    }
};