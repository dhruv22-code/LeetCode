class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int count = 0;
        vector<vector<char>>v(boxGrid.size() , vector<char>(boxGrid[0].size(), '.'));
        vector<vector<char>>v1(boxGrid[0].size() , vector<char>(boxGrid.size(), '.'));
        for(int i = 0 ; i < boxGrid.size() ; i++){
            for(int j = 0 ; j < boxGrid[0].size(); j++){
                if(boxGrid[i][j] == '*' ){
                    v[i][j] = '*';
                    while(count){
                        v[i][j - count] = '#';
                        count--;
                    }
                }else if(boxGrid[i][j] == '#')count++;
                 if( j == boxGrid[0].size() - 1){
                    int k = j;
                    while(v[i][k] == '#'){k--;count--;}
                     
                    while(count){
                        v[i][k - count + 1] = '#';
                        count--;
                    }
                }
                    
            }
        }
        
            for(int j = 0 ; j < boxGrid[0].size(); j++){
                for(int i = boxGrid.size() - 1; i >= 0 ; i--){
                   v1[j][boxGrid.size() - i - 1] =  v[i][j] ;
                }
            }
            return v1;
        
    }
};