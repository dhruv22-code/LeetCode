class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int large = INT_MIN;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > large){
                large = nums[i];
            }
        }
        int count = 0;
        for(int i = 0 ; i < nums.size() ;i++){
            if(nums[i] == large ){

                int j = i;
                while(j < nums.size() - 1 && nums[j + 1] == nums[j]){
                    j++;
                
                }
                count = max(count, j - i + 1 );
                i = j;
            }
            

        }
        return count;
    }
};