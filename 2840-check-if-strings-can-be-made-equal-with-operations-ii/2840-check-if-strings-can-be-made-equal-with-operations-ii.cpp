class Solution {
public:
    struct pair_hash {
        size_t operator()(const pair<char, int>& p) const {
            return hash<char>()(p.first) ^ (hash<int>()(p.second) << 1);
        }
    };

    bool checkStrings(string s1, string s2) {
        unordered_map<pair<char, int>, int, pair_hash> f1, f2;
        for (int i = 0; i < s1.length(); i++) {
            f1[{s1[i], i % 2}]++;
            f2[{s2[i], i % 2}]++;
        }

        for (int i = 0; i < s1.length(); i++) {
            if (f1[{s2[i], i % 2}] != f2[{s2[i], i % 2}])
                return false;
        }
        return true;
    }
};