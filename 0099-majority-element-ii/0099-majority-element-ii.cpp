class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        
        if(n == 0) return ans;
        
        int el1 = INT_MIN, el2 = INT_MIN;
        int count1 = 0, count2 = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == el1){
                count1++;
            } else if(nums[i] == el2){
                count2++;
            } else if(count1 == 0){
                el1 = nums[i];
                count1 = 1;
            } else if(count2 == 0){
                el2 = nums[i];
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }
        
        count1 = 0, count2 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == el1) count1++;
            else if(nums[i] == el2) count2++;
        }
        
        if(count1 > n/3) ans.push_back(el1);
        if(count2 > n/3) ans.push_back(el2);
        
        return ans;
    }
};
