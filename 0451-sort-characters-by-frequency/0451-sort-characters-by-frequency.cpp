class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        for (int i = 0; i < s.length(); i++) {
            m[s[i]]++;
        }
        vector<pair<int, char>> p;

        for (auto it = m.begin(); it != m.end(); it++) {
            pair<int, char> pai = {it->second, it->first};
            p.push_back(pai);
            
        }
        sort(p.rbegin(), p.rend());
        int k = 0;
        for (int i = 0; i < p.size(); i++) {

            for (int j = 0; j < p[i].first; j++) {
                s[k] = p[i].second;
                k++;
            }
        }
        return s;
    }
};