class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       int l = 0, r = 0, ans = 0;
       unordered_map<int, int>f;
       while(r < fruits.size()){
        f[fruits[r]]++;
        if(f.size() <= 2){
            ans = max(r - l + 1, ans);
        }else if(f.size() > 2){
            f[fruits[l]]--;
            if(f[fruits[l]] == 0)f.erase(fruits[l]);
            l++;
        }
        r++;
       }
       return ans;
    }
};