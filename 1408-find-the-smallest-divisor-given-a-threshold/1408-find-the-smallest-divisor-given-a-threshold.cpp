class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        sort(nums.begin() , nums.end());
        int low = nums[0];
        int high = nums[nums.size() -1];
      int divisor = INT_MAX;
        while(low <= high){
            int mid = (low + high)/2;
            bool a = check(mid, nums, threshold);
            if(a){
                
                divisor = min(divisor,mid );
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return divisor;
    }
    int check(int mid, vector<int>&nums, int threshold){
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if((nums[i] % mid )> 0){
                sum += (nums[i]/mid) + 1;
            }else {
                sum += nums[i]/mid;
            }
        }
        if(sum <= threshold)
      return true;
      else return false;
        
    }
};