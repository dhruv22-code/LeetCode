class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())return false;
        bool b = false;
        for(int i = 0 ; i < goal.length() ; i++){
            
            char c = goal[0];
            goal.erase(0, 1);
            goal += c;
            if(s[0] == goal[0]){
                bool a = check(s, goal);
                if(a){
                    return true;
                }
                }
        }
        
        return false;
    }
    bool check(string s, string goal){
            for(int i =0 ; i < s.length() ; i++){
                if(s[i] != goal[i])return false;
            }
            return true;
        }
};