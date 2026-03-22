class Solution {
    int p = 1000000007;
public:
    int specialTriplets(vector<int>& nums) {
        long long ans = 0;
        unordered_map<int, int> f, f1;

        for(int i = 0 ; i < nums.size() ; i++){
            f[nums[i]]++;
        }

        for(int i = 0 ; i < nums.size(); i++){
            if(f1.find(nums[i] * 2) != f1.end()){
                
                if(nums[i] == 0 && f[nums[i]*2] - f1[nums[i]*2] - 1 > 0){
                    ans = (ans + (1LL * f1[nums[i]*2] * 
                          (f[nums[i]*2] - f1[nums[i]*2] - 1)) % p) % p;
                }
                else if(nums[i] != 0 && f[nums[i]*2] - f1[nums[i]*2] > 0){
                    ans = (ans + (1LL * f1[nums[i]*2] * 
                          (f[nums[i]*2] - f1[nums[i]*2])) % p) % p;
                }
            }
            f1[nums[i]]++;
        }
        return ans;
    }
};