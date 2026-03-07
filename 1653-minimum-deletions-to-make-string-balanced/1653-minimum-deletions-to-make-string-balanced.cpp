class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.size();
        vector<int> aRight(n + 1, 0);

        for(int i = n - 1; i >= 0; i--) {
            aRight[i] = aRight[i + 1] + (s[i] == 'a');
        }

        int bLeft = 0;
        int ans = INT_MAX;

        for(int i = 0; i <= n; i++) {
            ans = min(ans, bLeft + aRight[i]);
            if(i < n && s[i] == 'b') bLeft++;
        }

        return ans;
    }
};