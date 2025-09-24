class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>ans(nums.size());

        for(int i = 0, j= 0; i < nums.size() - 1; i = i + 2, j++){
            ans[i ] = nums[nums.size() - j - 1];
            ans[i + 1] = nums[j];
        }
        if(nums.size() % 2 == 1){
            ans[nums.size() - 1] = nums[nums.size()/2];
        }
        return ans;
    }
};