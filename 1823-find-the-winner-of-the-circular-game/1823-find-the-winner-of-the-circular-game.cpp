class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>v(n);
        for(int i = 0 ; i < n ; i++){
            v[i] = i + 1;
        }
        int i = 0;
        while(v.size() != 1){
            
            v.erase(v.begin() + ((i + k - 1)%n));
            i = (i + k - 1)%(n--);

        }
        return v[0];

       

    }
};