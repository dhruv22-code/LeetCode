class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int pro = 1, ans = INT_MIN, min_pref = 1;
        bool b = true;
        for(int i = 0 ; i < nums.size(); i++){
            if(nums[i] == 0){
                ans = max(ans, 0);
                pro = 1;
                min_pref = 1;
                b = true;
                continue;
            }
            pro *= nums[i];
            
            if( pro < 0 && min_pref < 0){
                ans = max(ans, pro/min_pref);
            }
            if(pro < 0 && b){
                min_pref = pro;
                b = !b;
            }
            ans = max(ans, pro);
           
        }
        return ans;
        
    }
};