class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>ans(n);
        int sum = 0, j = 1;
        for(int i = 0 ; i < n ; i++){
            if(i % 2 == 0){
                ans[i] = j;
            }else {
                ans[i] = -j;
                j++;
            }
        }
        if(n % 2 == 1){
            ans[n - 1] = 0;
        }
        return ans;
    }
};