class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int ans =0;
        for(int i  =0 ;i < nums.size(); i++){
            while(nums[i] > 0){
                if(nums[i] % 10 == digit)ans++;
                nums[i] = nums[i]/10;
            }
        }
        return ans;
    }
};