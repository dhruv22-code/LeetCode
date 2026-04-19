class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>mini(nums.size());
        int miin = INT_MAX, maxi = INT_MIN;
        for(int i = nums.size() - 1; i >= 0; i--){
            miin = min(miin, nums[i]);
            mini[i] = miin;
            
        }
        for(int i = 0 ; i < nums.size() ; i++){
            maxi = max(maxi, nums[i]);
            if(maxi - mini[i] <= k)return i;
        }
        return -1;
    }
};