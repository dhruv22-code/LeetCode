class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k == 1)return 0;
        int ans = INT_MAX;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++){
            if(i + k -1 > nums.size() - 1)break;
            ans = min(ans, nums[i + k - 1] - nums[i] );
        }
        return ans;
    }
};