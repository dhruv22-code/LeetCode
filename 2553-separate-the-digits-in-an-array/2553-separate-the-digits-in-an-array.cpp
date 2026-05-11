class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>v;
        for(int i = nums.size() - 1; i >= 0; i--){
            while(nums[i] > 0){
                v.push_back(nums[i] % 10);
                nums[i] /= 10;
            }
        }
        for(int i = 0 ; i < v.size()/2 ; i++){
            int a = v[i];
            v[i] = v[v.size() - i - 1];
            v[v.size() - i - 1] = a;
        }
        return v;
        
    }
};