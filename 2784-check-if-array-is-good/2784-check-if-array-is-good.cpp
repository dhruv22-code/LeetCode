class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int, int>f;
        for(int i = 0 ; i < nums.size(); i++){
            f[nums[i]]++;
            if(nums[i] > nums.size() - 1 || (nums[i] != nums.size() - 1 && f[nums[i]] > 1) )return false;
        }
        if(f[nums.size() - 1] == 2)return true;
        return false;
    }
};