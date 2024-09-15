class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int,int>f;
        vector<int>v(2 , 0);
        int j = 0 ;
        for(int i = 0 ; i < nums.size() ; i++){
            f[nums[i]]++;
            if(f[nums[i]] > 1){
                v[j] = nums[i];
                j++;
            }

        }
        return v;
    }
};