class Solution {
public:
    int compareBitonicSums(vector<int>& nums) {
        long long int xs = 0;
        int i =0;
        for( ; i < nums.size() ; i++){
            if(nums[i] > nums[i + 1])break;
        }
        int l = i - 1;
        for(int r = i + 1; l >= 0 || r < nums.size(); r++, l--){
            if(l >= 0){
            xs += nums[l];
            }
            if(r < nums.size()){
            xs -= nums[r];
            }
            if(l == 0 ){
                if(xs < 0)return 1;
            }
            if(r == nums.size()){
                if(xs > 0)return 0;       
            }

        }
        if(xs > 0)return 0;
        else if(xs < 0)return 1;
        return -1;
    }
};