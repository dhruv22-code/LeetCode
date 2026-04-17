class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int, int> rev;
        int ans = INT_MAX;
        for(int i = 0 ; i < nums.size(); i++){

            if(rev.find(nums[i]) != rev.end()){
                ans = min(ans , abs(rev[nums[i]] - i));
                rev[nums[i]] = i;
            }
               int reve = findrev(nums[i]);
                rev[reve] = i;
            
        }
        if(ans == INT_MAX)return -1;
        return ans;
    }
    int findrev(int num){
        int a = 0;
        while(num > 0){
            a = 10 * a + (num % 10);
            num /= 10;
        }
        return a;
    }
};