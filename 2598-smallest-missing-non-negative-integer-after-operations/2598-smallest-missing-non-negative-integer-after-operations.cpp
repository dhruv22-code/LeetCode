class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int, int>f;
        int mini = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++){
            f[nums[i] % value]++;
            
        }
       
        for(int i = 0 ; i < value ; i++){
            if(f.find(i) == f.end()){
                return i;
            }
        }
         for(int i = 0 ; i < nums.size() ; i++){
            mini = min(mini, f[nums[i] % value]);
            
        }
        
        if(f[0] == mini){
            return value * mini;
        }else{
            int i = 0, ans = 0;
            
            while( i < value && f[i] > mini){
                ans = i + value*(mini);
                i++;
            }
            return ans;
        }
        return 0;
    }
}; 