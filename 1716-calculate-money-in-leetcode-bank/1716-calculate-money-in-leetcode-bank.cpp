class Solution {
public:
    int totalMoney(int n) {
        int sum =0, count = 0;
        while(count < n / 7){
            sum += 28 + 7 * (count++);
            
        }
        if(n % 7 > 0){
            sum += ((count  + n % 7)*(count  + n % 7 + 1))/2 - (count * (count + 1))/2;
        }
        return sum;
    }
};