class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int ans = 0, sum =0, sum1 = 0;
       for(int i =0 ; i < nums.size(); i++){
        sum += nums[i];
       } 
       for(int i = 0 ; i < nums.size() - 1; i++){
        sum1 += nums[i];
        if((sum1 % 2 == 0 && (sum - sum1) % 2 == 0) ||( sum1 % 2 == 1 && (sum - sum1) % 2 == 1)){
            ans++;
        }
       } 
       return ans;
    }
};