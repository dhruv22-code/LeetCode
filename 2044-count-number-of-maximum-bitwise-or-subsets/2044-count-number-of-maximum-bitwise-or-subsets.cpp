class Solution {
public:

    int solve(vector<int>nums, int index, int curr, int maxi){
         if (index == nums.size()) {
            return curr == maxi ? 1 : 0;
        }
        int skip = solve(nums, index + 1, curr, maxi);
        int take = solve(nums, index + 1, curr | nums[index], maxi);
        return skip+take;
    }
    int countMaxOrSubsets(vector<int>& nums) {
        int maxi = calc(nums);
       return solve(nums, 0 , 0 ,maxi );
    }
    int calc(vector<int>nums){
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            ans = ans | nums[i];
        }
        return ans;
    }
};