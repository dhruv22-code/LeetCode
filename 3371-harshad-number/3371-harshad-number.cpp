class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int y = x;
        while(x > 0){
            sum += x % 10;
            x = x/10;
        }
        if(y % sum == 0)return sum;
        else return -1;
    }
};