class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
        unordered_map<int, int>f;
        int sum = 0;
        for(int i = 0 ; i < nums.size(); i++){
            f[nums[i]]++;
        }
        for(auto ke : f){
            if(ke.second % k == 0){
                sum += ke.first * ke.second;
            }
        }
        return sum;
    }
};