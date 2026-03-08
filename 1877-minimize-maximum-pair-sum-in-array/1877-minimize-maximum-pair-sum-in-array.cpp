class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int ans = INT_MIN;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size(); i++){
            ans = max(ans, nums[i] + nums[nums.size() - 1 - i]);
        }
        return ans;
    }
};