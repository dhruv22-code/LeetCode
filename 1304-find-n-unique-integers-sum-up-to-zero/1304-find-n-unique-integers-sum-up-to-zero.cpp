class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans(n);
        ans[0] = 1;
        if(1 < n){
            ans[1] = -1;
        }
        for(int i = 2 ; i < n ; i++){
            if(i % 2 == 0){
                ans[i] = ans[i - 2] + 1;
            }else {
                ans[i] = -ans[i  - 1];
            
            }
        }
        if(n % 2 == 1){
            ans[n - 1] = 0;
        }
        return ans;
    }
};