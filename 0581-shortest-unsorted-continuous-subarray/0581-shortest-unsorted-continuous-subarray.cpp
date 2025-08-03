class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> dummy = nums;
        sort(nums.begin(), nums.end());
        int i = 0;
        for (; i < nums.size(); i++) {
            if (nums[i] != dummy[i])
                break;
        }
        int j = nums.size() - 1;
        for (; j >= i; j--) {
            if (nums[j] != dummy[j])
                break;
        }
        return j - i + 1;
    }
};