class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int t = 0;
        double wt = 0;
        for(int i = 0; i < customers.size(); i++) {
            if(customers[i][0] < t) {
                wt += t - customers[i][0]; 
            } else {
                t = customers[i][0];  
            }
            t += customers[i][1];  
            wt += customers[i][1];  
        }
        return (double)wt / customers.size();
    }
};
