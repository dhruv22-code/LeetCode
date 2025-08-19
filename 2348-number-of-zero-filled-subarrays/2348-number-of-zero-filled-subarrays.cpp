class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int i = 0;
        long long ans = 0;
        for(int i = 0 ; i < nums.size(); ){
            if(nums[i] == 0){
                int j = i;
                for(; j < nums.size() ; j++){
                if( nums[j] != 0){
                    break;
                }
            }
            ans += (long long)(j - i)*(j - i + 1)/2;
            i = j;
            }
            else i++;
           
        }
        return ans;
    }
};