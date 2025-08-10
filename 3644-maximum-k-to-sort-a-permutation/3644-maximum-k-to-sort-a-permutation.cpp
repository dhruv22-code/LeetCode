class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans = 0;
        bool b = true;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] != i){
                if(b){
                    ans = nums[i];
                    b = false;
                }else{
                    ans = ans & nums[i];
                }
            }
        }
        return ans;
    }
};