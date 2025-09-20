class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int sum = 0;
        for(int i  = 0 ; i < nums.size() ; i++){
            if(sum + nums[i] >= 0){
                sum += nums[i];
            }
            else sum = 0;
            ans = max(ans, sum);
        }
        int a = *max_element(nums.begin() , nums.end());
        if( a< 0)return a;
        return ans;
    }
};