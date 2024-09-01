class Solution {
public:
    string largestOddNumber(string num) {
        string s;
        int j  =-1;
        for(int i = 0 ; i < num.length(); i++){
            if(num[i] % 2 != 0){
                j  =i;
            }
        }
        if(j == -1)return "";
        for(int i = 0 ; i <= j; i++){
           s+=num[i];
        }
        return s;

    }
};