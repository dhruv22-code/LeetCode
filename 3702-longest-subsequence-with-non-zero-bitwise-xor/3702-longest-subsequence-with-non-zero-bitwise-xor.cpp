class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        if(nums.size() == 1 && nums[0] == 0)return 0;
        int Xor = nums[0]; 
        for(int i = 1; i< nums.size() ; i++){
            Xor ^= nums[i];
        }
        int i = 0, j = nums.size() - 1;
        while(i < j && Xor == 0){
            if(nums[j] ^ Xor != 0){
                return j - i;
            }else if(nums[i] ^ Xor != 0){
                return j - i;
            }else {
                i++;
                j--;
                Xor ^= nums[i] ^ nums[j];
            }
        }
        if(i > j )return 0;
        else return j - i + 1;
    }
};