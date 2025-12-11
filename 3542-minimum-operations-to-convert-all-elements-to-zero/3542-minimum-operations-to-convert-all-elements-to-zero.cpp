class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0;
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == 0)continue;
            int mini = nums[i];
            int l = i, r = l + 1;
            while(l > 0 && nums[l] >= mini){
                
                if(nums[l] == mini)nums[l] = 0;
                l--;
            }
            while(r < nums.size() && nums[r] >= mini){
                if(nums[r] == mini)nums[r] = 0;
                r++;
            }
            count++;
        }
        return count;
    }
};