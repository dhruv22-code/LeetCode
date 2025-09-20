class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int sum = 0, a = INT_MIN;
        for(int i  = 0 ; i < nums.size() ; i++){
            if(sum + nums[i] >= 0){
                sum += nums[i];
            }
            else sum = 0;
            a = max(a, nums[i]);
            ans = max(ans, sum);
        }
       
        if( a< 0)return a;
        return ans;
    }
};