class Solution {
public:
    bool partitionArray(vector<int>& nums, int k) {
        unordered_map<int, int>f;
        for(int i = 0 ;  i < nums.size() ; i++){
            f[nums[i]]++;
        }
        int maxi = INT_MIN;
        for(auto it = f.begin() ; it != f.end() ;it++){
            maxi = max(maxi , it->second);
        }
        if( nums.size() % k == 0 && maxi <= nums.size()/k)return true;
        return false;


    }
};