class Solution {
public:

    // case: only one character
    int oneChar(string &s){
        int ans = 0, cur = 0;
        
        for(int i = 0; i < s.size(); i++){
            if(i == 0 || s[i] == s[i-1]) cur++;
            else cur = 1;
            
            ans = max(ans, cur);
        }
        
        return ans;
    }

    // case: two characters with equal count
    int twoChar(string &s, char x, char y){
        unordered_map<int,int> mp;
        mp[0] = -1;
        
        int sum = 0, ans = 0;
        
        for(int i = 0; i < s.size(); i++){
            
            if(s[i] == x) sum++;
            else if(s[i] == y) sum--;
            else{
                mp.clear();
                mp[0] = i;
                sum = 0;
                continue;
            }
            
            if(mp.count(sum))
                ans = max(ans, i - mp[sum]);
            else
                mp[sum] = i;
        }
        
        return ans;
    }

    // case: three characters a,b,c
    int threeChar(string &s){
        unordered_map<long long,int> mp;
        
        int a = 0, b = 0, c = 0;
        int ans = 0;
        
        mp[0] = -1;
        
        for(int i = 0; i < s.size(); i++){
            
            if(s[i] == 'a') a++;
            else if(s[i] == 'b') b++;
            else c++;
            
            long long key = ((long long)(a - b) << 32) ^ (a - c);
            
            if(mp.count(key))
                ans = max(ans, i - mp[key]);
            else
                mp[key] = i;
        }
        
        return ans;
    }

    int longestBalanced(string s) {
        
        int ans = 0;
        
        ans = max(ans, oneChar(s));
        ans = max(ans, twoChar(s,'a','b'));
        ans = max(ans, twoChar(s,'b','c'));
        ans = max(ans, twoChar(s,'a','c'));
        ans = max(ans, threeChar(s));
        
        return ans;
    }
};