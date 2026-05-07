class Solution {
public:
    string sortVowels(string s) {

        vector<vector<int>> v = {
    {'a', 0, 1000000000},
    {'e', 0, 1000000000},
    {'i', 0, 1000000000},
    {'o', 0, 1000000000},
    {'u', 0, 1000000000}
};

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == 'a') {
                v[0][1]++;
                v[0][2] = min(v[0][2], i);
            }

            else if (s[i] == 'e') {
                v[1][1]++;
                v[1][2] = min(v[1][2], i);
            }

            else if (s[i] == 'i') {
                v[2][1]++;
                v[2][2] = min(v[2][2], i);
            }

            else if (s[i] == 'o') {
                v[3][1]++;
                v[3][2] = min(v[3][2], i);
            }

            else if (s[i] == 'u') {
                v[4][1]++;
                v[4][2] = min(v[4][2], i);
            }
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b) {

            if (a[1] != b[1])
                return a[1] > b[1];

            return a[2] < b[2];
        });

        int j = 0;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' ||
                s[i] == 'o' || s[i] == 'u') {

                while (j < 5 && v[j][1] == 0)
                    j++;

                s[i] = v[j][0];
                v[j][1]--;
            }
        }

        return s;
    }
};