class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxindex = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i > maxindex)return false;
            if(maxindex <= i){
                maxindex += nums[i];
            }
        }
        return true;
    }
};