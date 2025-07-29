class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i =0, j=1;
        
        while(j <nums.size())
        {
            if(nums[i]==nums[j])return nums[i];
            else
            {
                i++ ;j++;
            }
        }
        return 0;
    }
};