class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = 0; 
        for(int i = 0; i < rolls.size(); i++){
            sum += rolls[i];
        }
        int rem = mean * (n + rolls.size()) - sum;
        if(rem < 0 )return {};
        int each = rem / n;
        if(each > 6)return {};
        vector<int>v(n , each);
        int mod = rem % n;
        int i = 0;
        for(; i < mod; i++){
            v[i]++;
            if(v[i] > 6)return {};
        }
        if(i < v.size() && v[i] == 0)return {};
        return v;
        
    }
};