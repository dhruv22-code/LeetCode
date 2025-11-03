class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>v;
        sort(nums.begin(), nums.end());
        int i = 0 , j = 1;
        while(i < nums.size() - 1){
            int count = 1;
            while(nums[i] + count < nums[i + 1]){
                v.push_back(nums[i] + count );
                count++;
            }
            i++;
        }
        return v;
        
    }
};