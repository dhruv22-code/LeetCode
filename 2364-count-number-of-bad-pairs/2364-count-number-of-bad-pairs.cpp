class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long ans = 0;
        unordered_map<int, int>f;
        for(int i = 0 ; i < nums.size() ; i++){

            f[nums[i] - i]++;
        }
        for(auto i : f){
            ans += (i.second- 1)*(i.second)/2;
        }
        return ((nums.size()) * (nums.size()- 1)/2) - ans;
    }
};