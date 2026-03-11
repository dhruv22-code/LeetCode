class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        unordered_map<int, int>f;
        for(int i = 0 ; i < nums.size() ; i++){
            f[nums[i]]++;
        }
        while(1){
            if(f.find(original ) != f.end()){
                original *= 2;
            }else break;

        }
        return original;
    }
};