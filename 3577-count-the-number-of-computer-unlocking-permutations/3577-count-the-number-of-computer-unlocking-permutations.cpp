class Solution {
public:
    int countPermutations(vector<int>& complexity) {
        for(int i = 1 ; i < complexity.size(); i++){
            if(complexity[i] <= complexity[0])return 0;
        }
       
        int ans = 1;
        for(int i = 1 ; i<= complexity.size() - 1; i++){
            ans = (1LL * ans * i) % 1000000007;
        }
        return ans;
    }
};