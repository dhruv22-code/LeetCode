class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int d = INT_MAX;
        vector<vector<int>>v;
        sort(arr.begin(), arr.end());
        unordered_map<int, vector<int>>f;
        for(int i = 0 ; i < arr.size() - 1; i++){
            int diff = abs(arr[i] - arr[i + 1]);
            d = min(d, diff);
            f[i] = {arr[i], arr[i + 1]};
        }
        for(int i = 0 ; i < arr.size() - 1 ; i++){
            int diff = abs(arr[i] - arr[i + 1]);
            if(diff == d){
                v.push_back(f[i]);
            }
        }
        return v;
    }
};