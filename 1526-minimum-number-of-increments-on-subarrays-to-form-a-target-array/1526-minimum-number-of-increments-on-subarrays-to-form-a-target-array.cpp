class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int n = target.size();
        if (n == 0) return 0;

        int ans = 0;
        int i = 0;
        bool firstGroup = true;
        int prevLast = 0;

        while (i < n) {
            int groupMax = target[i];
            int last = target[i];
            int dir = 0; // 0 = unknown, 1 = rising, -1 = falling
            i++;

            // Determine initial direction (ignore flats)
            while (i < n && target[i] == target[i - 1]) {
                last = target[i];
                groupMax = max(groupMax, target[i]);
                i++;
            }
            if (i < n) dir = (target[i] > target[i - 1]) ? 1 : -1;

            // Traverse the group
            while (i < n) {
                if (dir == 1) {
                    if (target[i] >= target[i - 1]) {
                        last = target[i];
                        groupMax = max(groupMax, target[i]);
                        i++;
                    } else {
                        // switch to decline
                        dir = -1;
                        last = target[i];
                        groupMax = max(groupMax, target[i]);
                        i++;
                    }
                } else {
                    if (target[i] <= target[i - 1]) {
                        last = target[i];
                        groupMax = max(groupMax, target[i]);
                        i++;
                    } else {
                        // group ends when next rise starts
                        break;
                    }
                }
            }

            // Add contribution for this group
            if (firstGroup) {
                ans += groupMax;
                firstGroup = false;
            } else {
                ans += (groupMax - prevLast);
            }

            prevLast = last; // update last element of this group
        }

        return ans;
    }
};
