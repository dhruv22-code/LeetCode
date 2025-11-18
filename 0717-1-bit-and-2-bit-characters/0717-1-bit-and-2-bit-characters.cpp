class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        stack<pair<int, int>>st;
        for(int i = 0 ; i < bits.size() ; i++){
            if(!st.empty() && st.top().first == 1)st.pop();
            else st.push({bits[i], i});
        }
        if(st.empty())return false;
        else if(st.top().first == 0 && st.top().second == bits.size() - 1)return true;
        else return false;
    }
};