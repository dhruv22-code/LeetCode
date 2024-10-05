class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin() , skill.end());
        long long ans = 0;
        if(skill.size() == 2){
            return skill[0]*skill[1];
        }
        int a = skill[0] + skill[skill.size() -1];

            for(int i = 0; i < skill.size()/2; i++){
                if(skill[i] + skill[skill.size() - i - 1] != a)return -1;
                ans += skill[i] * skill[skill.size() - i - 1];
            }
            return ans;
       

    }
};