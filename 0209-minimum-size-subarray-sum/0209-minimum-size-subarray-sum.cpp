class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0;
        int sum = 0, ans = INT_MAX;
        while(j < nums.size()){
            while(j < nums.size() && sum < target){
                sum += nums[j];
                j++;
            }
            while(i < nums.size() && sum >= target){
                ans = min(ans, j - i);
                sum -= nums[i];
                i++;
            }
            
        }
        if(ans == INT_MAX)return 0;
        return ans;
    }
};