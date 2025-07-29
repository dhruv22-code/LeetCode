class Solution {
public:
    int countHillValley(vector<int>& nums) {
        if(nums.size() <= 2)return 0;
        int ans = 0;
        for(int i = 1; i < nums.size()- 1;i++){
            int j = i-1, k = i+ 1;

            while(j > 0 && nums[j] == nums[i]){
                j--;
            }
            while(k < nums.size() && nums[k] == nums[i]){
                k++;
            }
            if((nums[i] > nums[k] && nums[i] > nums[j]) || (nums[i] < nums[k] && nums[i] < nums[j]))ans++;
           
            if(nums[i] == nums[i+1])i++;
        }
        return ans;
    }
};