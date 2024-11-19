class Solution {
public:
    int minElement(vector<int>& nums) {
        int small = INT_MAX;
        int sum ;
        for(int i = 0 ; i< nums.size() ; i++){
            sum = 0;
            while(nums[i] > 0){
                sum += nums[i] % 10;
                nums[i] = nums[i]/ 10;
            }
            small = min(small, sum);
        }
        return small;
    }
};