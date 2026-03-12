class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        long long curr = 0 ;
        vector<bool>ans(nums.size(), false);
        for(int i = 0 ; i < nums.size() ; i++){
            curr = (2 * curr + nums[i])% 5;
            if(curr == 0)ans[i] = true;
        }
        return ans;
    }
};
