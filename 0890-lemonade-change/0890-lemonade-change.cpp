class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
       
        unordered_map<int, int>f;
        for(int i = 0 ;  i < bills.size() ; i++){
            if(bills[i] == 5)
            f[bills[i]]++;
            else if(bills[i] == 10){
                f[bills[i]]++;
                f[5]--;
                if(f[5] < 0)return false;
            }else if(bills[i] == 20){
               
                if(f[10] >= 1 && f[5] >=1){
                    f[10]--;
                    f[5]--;
                }else if(f[5] >= 3){
                    f[5] = f[5] - 3;
                }else return false;
            }


        }
        return true;
    }
};