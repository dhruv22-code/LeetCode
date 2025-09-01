class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_map<int, int>m;
        for(int i = 0 ; i < friends.size() ; i++ ){
            m[friends[i]]++;
        }
        int j = 0;
        for(int i = 0 ; i < order.size() ; i++){
            if(m.find(order[i]) != m.end()){
                friends[j++] = order[i];
            }
        }
        return friends;
    }
};