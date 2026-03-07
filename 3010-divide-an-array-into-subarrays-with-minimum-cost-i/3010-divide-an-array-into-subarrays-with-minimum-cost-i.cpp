class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int cost = nums[0];
        nums.erase(nums.begin());
        sort(nums.begin(), nums.end());
        return cost + nums[0] + nums[1];

        
    }
};