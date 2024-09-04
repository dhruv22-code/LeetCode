class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int x = 0; 
        int y  =0;
        char c = 'n';
        int*dir =&y;
        int a = 1;
        int maxi = 0;
        //the find thing is making code inefficient so i used a set instead
         set<pair<int, int>> obstacleSet;
        for (const auto& obs : obstacles) {
            obstacleSet.insert({obs[0], obs[1]});
        }
        for(int i = 0; i < commands.size(); i++){
            
            if(commands[i] == -2){
             if(c == 'n'){
                c = 'w';
                a = -1;
             }else if( c == 's'){
                c = 'e';
                 a = 1;
             }else if( c== 'e'){
                c = 'n';
                 a = 1;
             }else if( c== 'w'){
                c = 's';
                 a = -1;
             }
            }else if(commands[i] == -1){
                if(c == 'n'){
                c = 'e';
                a = 1;
             }else if( c == 's'){
                c = 'w';
                a = -1;
             }else if( c== 'e'){
                c = 's';
                a = -1;
             }else if( c== 'w'){
                c = 'n';
                 a= 1;
             }
            }else if(commands[i] > 0){
                if(c == 'n' || c == 's'){
                    dir = &y;
                }else if(c == 'e' || c == 'w'){
                    dir = &x;
                }
                for(int j = 0 ; j< commands[i];j++){
                    *dir = *dir + a ;
                    if (obstacleSet.find({x, y}) != obstacleSet.end()){
                        *dir = *dir - a;
                        break;
                    }
                }
                maxi = max(maxi,(x*x + y*y) );
            }
        }
        return maxi ;
    }
};