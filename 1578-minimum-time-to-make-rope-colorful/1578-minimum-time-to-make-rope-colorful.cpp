class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int maxi = INT_MIN, ans = 0;
        for(int i = 0; i < colors.length(); i++){
            int sum = 0;
            while(i  < colors.length() - 1 && colors[i] == colors[i + 1] ){
                sum += neededTime[i];
                maxi  = max(maxi, neededTime[i]);
                i++;
            }
            if(sum){
                
                ans += sum + neededTime[i] - max(maxi, neededTime[i]);
            }
            maxi = INT_MIN;
        }
        return ans;
    }
};