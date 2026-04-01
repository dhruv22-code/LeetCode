class Solution {
public:
    string generateString(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();

        string s(n + m - 1, '?');
        vector<bool> fixed(n + m - 1, false);

        // Step 1: Process all T windows
        for (int i = 0; i < n; i++) {
            if (str1[i] == 'T') {
                for (int j = 0; j < m; j++) {
                    if (s[i + j] != '?' && s[i + j] != str2[j]) {
                        return "";
                    }
                    s[i + j] = str2[j];
                    fixed[i + j] = true;
                }
            }
        }

        // Step 2: Process all F windows
        for (int i = 0; i < n; i++) {
            if (str1[i] == 'F') {
                bool mismatch = false;
                int idx = -1;

                for (int j = i; j < i + m; j++) {
                    if (s[j] != '?' && s[j] != str2[j - i]) {
                        mismatch = true;
                    }
                    if (idx == -1 && !fixed[j]) {
                        idx = j;
                    }
                }

                // Already not equal, good
                if (mismatch) continue;

                // No mismatch and no place to change => impossible
                if (idx == -1) return "";

                // Force mismatch at idx
                char need = str2[idx - i];
                for (char c = 'a'; c <= 'z'; c++) {
                    if (c != need) {
                        s[idx] = c;
                        break;
                    }
                }
            }
        }

        // Step 3: Fill remaining ? with 'a'
        for (char &c : s) {
            if (c == '?') c = 'a';
        }

        // Step 4: Final verification (important)
        for (int i = 0; i < n; i++) {
            string sub = s.substr(i, m);
            if (str1[i] == 'T' && sub != str2) return "";
            if (str1[i] == 'F' && sub == str2) return "";
        }

        return s;
    }
};