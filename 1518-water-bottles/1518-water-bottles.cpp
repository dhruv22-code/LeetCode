class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int sum = numBottles, rem = 0;
        while(numBottles > 0){
            sum += (numBottles + rem)/numExchange;
            rem = numBottles % numExchange;
            numBottles = numBottles/numExchange;
            
        }
        return sum;
    }
};