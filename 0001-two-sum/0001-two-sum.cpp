class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int>f;
        for(int i = 0 ; i < nums.size() ; i++){
            
            if(f.find(target - nums[i]) != f.end()){
                ans = {i, f[target- nums[i]]};
            }
               f[nums[i]] = i;
            
        }
        return ans;
    }
};