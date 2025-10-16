class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        unordered_map<int, int>f;
        int mini = INT_MAX;
         for (int x : nums) {
            int rem = ((x % value) + value) % value;
            f[rem]++;
        }
        for(int i = 0 ; i < value ; i++){
            if(f.find(i) == f.end()){
                return i;
            }
            mini = min(mini, f[i]);
        }
      
                  for (int i = 0; i < value; i++) {
            if (f[i] == mini)
                return i + mini * value;
        }
            return 0;
       
     
    }
}; 