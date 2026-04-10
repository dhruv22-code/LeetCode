class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        vector<int>cnt(nums.size(), 0);
        unordered_map<int, int>idx, len;
        int ans = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++){
            cnt[nums[i] - 1]++;
            if(cnt[nums[i] - 1] == 2){
                len[nums[i]] += i - idx[nums[i]];
                
            }else if(cnt[nums[i] - 1] == 3){
                len[nums[i]] += i - idx[nums[i]];
                ans = min(ans, len[nums[i]]);
                cnt[nums[i] - 1] = 2;
                len[nums[i]] = i - idx[nums[i]];
            }
            idx[nums[i]] = i;
        }
        if(ans == INT_MAX)return -1;
        return ans*2;
    }
};