class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int>f;
        f[0] = 1;
        int count = 0, sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum += nums[i];
            if(f.find(sum - goal) != f.end()){
                count += f[sum - goal];
            }
            f[sum]++;
        }
        return count;
    }
};