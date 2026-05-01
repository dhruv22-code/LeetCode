class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cnt = 0, ans = 0;
        for(int i = 0 ; i < moves.length() ; i++){
            if(moves[i] == 'L'){
                ans--;
            }
            else if(moves[i] == 'R')ans++;
            else cnt++;
        }
        return abs(ans)+cnt;
    }
};