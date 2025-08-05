class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> v1;
        vector<int> v2;
        int n = nums.size();

        // Split largest half to v1, smallest half to v2
        for (int i = n - 1, count = 0; count < (n + 1) / 2; i--, count++) {
            v1.push_back(nums[i]);  // larger half
        }

        for (int i = (n + 1) / 2 - 1; i >= 0; i--) {
            v2.push_back(nums[i]);  // smaller half reversed
        }

        int i = 0, j = 0, k = 0;

        while (k < n) {
            if (i < v2.size())
                nums[k++] = v2[i++];
            if (j < v1.size() && k < n)
                nums[k++] = v1[j++];
        }
    }
};
