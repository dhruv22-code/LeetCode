class Solution {
public:
    int minPartitions(string n) {
        char l = '1';
        for(int  i= 0 ; i < n.length(); i++){
            if(l < n[i]){
                l = n[i];
            }
        }
        return l  - '0';
    }
};