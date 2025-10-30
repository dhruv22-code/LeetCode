class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int n = target.size();
        if (n == 0) return 0;

        int ans = 0;
        int prev = 0;                // height before current group (0 initially)
        int groupMax = target[0];    // max inside current group

        for (int i = 1; i < n; ++i) {
            if (target[i] >= target[i - 1]) {
                // still rising or flat in the current group
                groupMax = max(groupMax, target[i]);
            } else {
                // decline -> current group ends at i-1
                ans += max(0, groupMax - prev);
                // new group's base is the valley we dropped to
                prev = target[i];
                groupMax = target[i];
            }
        }

        // add contribution of the last group
        ans += max(0, groupMax - prev);
        return ans;
    }
};
