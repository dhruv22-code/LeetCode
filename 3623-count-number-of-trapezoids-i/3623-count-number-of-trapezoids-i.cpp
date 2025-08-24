class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        int MOD = 1000000007;
        unordered_map<int, long long> f;
        for(int i = 0 ; i < points.size() ; i++){
            f[points[i][1]]++;
        }
        long long sum=0,sum2=0;
        for(auto it=f.begin();it!=f.end();++it){
            it->second = (it->second*(it->second-1)/2)%MOD;
            sum = (sum+it->second)%MOD;
        }
        long long ans=0;
        for(auto it=f.begin();it!=f.end();++it){
            ans = (ans + (it->second * ((sum - it->second )%MOD))%MOD)%MOD;
        }
        return ans/2;
    }
};
