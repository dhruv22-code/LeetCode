class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev = 0, ans = 0;
        int count = 0;
        for(int i= 0 ; i < bank.size() ; i++){
            for(int j = 0 ; j < bank[0].size() ; j++){
                if(bank[i][j] == '1'){
                    count++;
                }
            }
            if(count > 0){
                ans += count * prev;
                prev = count;
            }
            count = 0;
        }
        return ans;
    }
};