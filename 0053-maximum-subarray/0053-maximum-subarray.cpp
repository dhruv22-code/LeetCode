class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN, sum = 0, alt = INT_MIN;
        for (int i = 0; i < nums.size(); i++) {
          sum+=nums[i];
          if(sum < 0)sum = 0;
          else ans = max(ans, sum);
          alt = max(alt, nums[i]);           
        }
        if(ans > 0)
        return ans;
        else return alt;
    }
};