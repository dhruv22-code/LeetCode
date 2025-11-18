class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int pos = -1;
        for(int i = 0 ; i < nums.size() ; i++){
            if(pos != -1 && nums[i] == 1 && abs(i - pos) <= k)return false;
            else if(nums[i]== 1)pos = i;
        }
        return true;
    }
};