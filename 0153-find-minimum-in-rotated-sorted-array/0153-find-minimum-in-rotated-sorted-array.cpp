class Solution {
public:
    int findMin(vector<int>& nums) {
       
        if(nums.size() == 2){
            if(nums[0] > nums[1])return nums[1];
            else return nums[0];
        }
         int small = nums[0];
       return bs(nums, 0 , nums.size() - 1, small);

    }
    int bs(vector<int>& nums, int low, int high, int small){
        
        if(nums[low] > nums[high]){
             while(low < high){
           
            int mid = (low + high)/2;
            if(nums[mid] < small){
                small = nums[mid];
                high = mid -1;
            } 
            else if(nums[mid] > small){
                low = mid + 1;
              
            }
        }
         if(low == high && nums[low] < small )return nums[low];
         return small;
        
        }
        else return nums[0];
       
    }
};