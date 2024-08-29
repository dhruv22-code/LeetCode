class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < n; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1])
                    continue;
                int k = j + 1;
                int high = n - 1;

                while (k < high) {
                    long long sum =
                        (long long)nums[i] + nums[j] + nums[k] + nums[high];

                    if (sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k],
                                            nums[high]};
                        v.push_back(temp);
                        k++;
                        high--;

                        while (k < high && nums[k] == nums[k - 1])
                            k++;
                        while (k < high && nums[high] == nums[high + 1])
                            high--;
                    } else if (sum > target) {
                        high--;
                    } else {
                        k++;
                    }
                }
            }
        }

        return v;
    }
};
