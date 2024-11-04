class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map<int, int>f;
         f[0] = 1;
        int count = 0, sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] % 2 == 1){
                sum++;
            }
            if(f.find(sum - k) != f.end()){
                count += f[sum - k];
            }
            f[sum]++;
        }
        return count;
    }
    
};