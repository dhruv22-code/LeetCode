class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int o = 0, mini = INT_MAX;
        for(int i = 0 ; i < nums1.size() ;i++){
            if(nums1[i] % 2 == 1){
                o++;   
            }
            mini = min(mini, nums1[i]);
        }
        if(o == 0 || mini % 2 == 1 )return true;
        return false;
    }
};