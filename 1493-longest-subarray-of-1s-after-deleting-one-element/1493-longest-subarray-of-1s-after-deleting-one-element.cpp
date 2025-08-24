class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int count = 0;
        int ans = 0, i = 0, j = 0, recent = -1;

        while (j < nums.size()) {
            if (nums[j] == 0) {
                count++;
                if (count > 1) {

                    
                    i = recent + 1;
                    count = 1;
                }
                recent = j;
            }
            
            j++;
            ans = max(j - i - 1, ans);
        }
        return ans;
    }
};