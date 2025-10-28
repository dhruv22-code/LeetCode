class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int valid = 0;
        int psum = 0, tsum = 0;
        for(int i = 0 ; i < nums.size(); i++){
            tsum += nums[i];
        }
        for(int i = 0 ; i < nums.size() ; i++){
            psum += nums[i];
            if(nums[i] == 0 && tsum - psum == psum )valid++;
        }
        return valid * 2;
    }
};