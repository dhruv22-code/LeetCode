class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {
                                    int n = potions.size();
        sort(potions.begin(), potions.end());

        for (int i = 0; i < spells.size(); i++) {
            long long m = (success + spells[i]  - 1)/spells[i];
        int idx = lower_bound(potions.begin(),potions.end(),m) - potions.begin();
       
            spells[i] = n - idx ;
    
        }
        return spells;
    }
};