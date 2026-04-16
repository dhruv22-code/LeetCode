class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n = nums.size();

        vector<pair<int,int>> v(n);
        for(int i = 0; i < n; i++){
            v[i] = {nums[i], i};
        }

        sort(v.begin(), v.end());

        vector<int> res(n, -1);

        for(int i = 0; i < n; i++){
            int idx = i;

            while(i < n - 1 && v[i].first == v[i + 1].first) i++;
            int end = i;

            vector<int> indices;
            for(int j = idx; j <= end; j++){
                indices.push_back(v[j].second);
            }

            int k = indices.size();

            if(k > 1){
                for(int j = 0; j < k; j++){
                    int curr = indices[j];
                    int next = indices[(j+1)%k];
                    int prev = indices[(j-1+k)%k];

                    int d1 = abs(next - curr);
                    int d2 = abs(curr - prev);

                    d1 = min(d1, n - d1);
                    d2 = min(d2, n - d2);

                    res[curr] = min(d1, d2);
                }
            }

            i = end;
        }
        vector<int> ans;
        for(int q : queries){
            ans.push_back(res[q]);
        }

        return ans;
    }
};