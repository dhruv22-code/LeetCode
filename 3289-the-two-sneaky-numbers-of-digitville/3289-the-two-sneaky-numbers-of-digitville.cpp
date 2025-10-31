class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int>f;
        vector<int>ans;
        for(int i = 0 ; i < nums.size() ; i++){
            f[nums[i]]++;
            if(f[nums[i]] == 2){
                ans.push_back(nums[i]);
                if(ans.size() == 2)return ans;
            }
        }
        return ans;
    }
};