class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int count = 0;
        for(int i = 0; i < chalk.size(); i++){
            count += chalk[i];
        }
        long long int rem = k % count;
       
        int i = 0;
        for(int i = 0; i < chalk.size(); i++){
            if(rem < chalk[i]){
                return i;
            }
            rem -= chalk[i];
        }

        return 0;
    }
};