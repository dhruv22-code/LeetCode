class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        if(nums.size() == 1 )return {nums[0]};
        vector<int> v(nums.size());
        int maxi = INT_MIN;
        for (int i = nums.size() - 1; i >= 0; i--) {
            maxi = max(nums[i], maxi);
            v[i] = maxi;
        }
        maxi = nums[0];
        vector<int> ans;
        ans.push_back(nums[0]);
        for (int i = 1; i < nums.size() - 1; i++) {

            if (nums[i] > maxi || nums[i] > v[i + 1])
                ans.push_back(nums[i]);
            maxi = max(nums[i], maxi);
        }
        ans.push_back(nums[nums.size() - 1]);
        return ans;
    }
};