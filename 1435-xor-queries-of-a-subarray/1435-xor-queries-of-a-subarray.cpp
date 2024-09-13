class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>v;
        for(int i =  0;  i< queries.size() ; i++){
            int xo = 0;
            for(int j = queries[i][0] ; j <= queries[i][1]; j++){
                xo = xo ^ arr[j];
            }
            v.push_back(xo);
        }
        return v;
    }
};