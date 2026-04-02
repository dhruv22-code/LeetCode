class Solution {
public:
    int minAbsoluteDifference(vector<int>& nums) {
        int ans = INT_MAX, j = -1, prev = -1;
        for(int i = 0 ; i < nums.size(); i++){
            if(prev == -1 && (nums[i] == 1 || nums[i] == 2)){
                prev = nums[i];
                j = i;
            }
            if(nums[i] == prev){
                j = i;
            }else if(nums[i] != prev && (nums[i] == 1 || nums[i] == 2)){
                ans = min(ans , abs(j - i));
                prev = nums[i];
                j = i;
            }
        }
        if(ans > 100)return -1;
        else return ans;
    }
};