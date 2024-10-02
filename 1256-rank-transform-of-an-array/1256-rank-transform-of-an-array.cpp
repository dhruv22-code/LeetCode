class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>v(arr);
        sort(v.begin(), v.end());
        unordered_map<int, int>f;
        unordered_map<int, int>r;
        int count = 0;
        for(int i = 0; i < v.size() ; i++){
            f[v[i]]++;
            if(f[v[i]] > 1){
                continue;
            }else if(f[v[i]] == 1){
                count++;
                r[v[i]] = count;
            }

        }
        for(int i = 0 ; i < arr.size() ; i++){
            arr[i] = r[arr[i]];
        }
        return arr;
    }
};