class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int>f;
        for(int i = 0 ; i < nums.size() ; i++){
            f[nums[i]]++;
            if(f[nums[i]] > 1)return nums[i];
        }
        return 0;
    }
};