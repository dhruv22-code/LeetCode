class Solution {
public:
    int triangleNumber(vector<int>& nums) {
    sort(nums.begin() , nums.end());
    int count = 0;
    for(int i = 0 ; i < nums.size() ; i++){
        for(int j = i + 1; j < nums.size() ; j++){
            auto it = lower_bound(nums.begin() , nums.end() , nums[i] + nums[j]);
            int idx = distance( nums.begin(), it);
            if(idx > j){
                 count += idx - j - 1;
            }else break;
        }
    }
    return count;
    }
};