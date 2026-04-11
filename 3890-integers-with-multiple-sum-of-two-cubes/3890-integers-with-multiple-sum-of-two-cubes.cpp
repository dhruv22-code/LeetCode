class Solution {
public:
    vector<int> findGoodIntegers(int n) {
        unordered_map<int, int>f;
        set<int>s;
        vector<int>v;
        for(int i = 0 ; i < 1000; i++){
            if(pow(i, 3) > n)break;
            for(int j = i + 1; j < 1000; j++){
                int num = pow(i, 3) + pow(j , 3);
                if(num > n)break;
                f[num]++; 
                if(f[num] == 2)s.insert(num);
            }

        }
        for(auto it = s.begin(); it != s.end(); it++){
            v.push_back(*it);
        }
        return v;
        
    }
};