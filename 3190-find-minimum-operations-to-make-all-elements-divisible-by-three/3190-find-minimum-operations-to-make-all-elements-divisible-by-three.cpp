class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            int a = (nums[i]/3)*3;
            ans += min(nums[i] - a, a + 3 - nums[i]);
        }
        return ans;
    }
};