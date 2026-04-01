class Solution {
public:
    string generateString(string str1, string str2) {
        int n = str1.size(), m = str2.size();
        string s(n + m - 1, '?');
        vector<bool> fixed(n + m - 1, false);

        // Step 1: Apply all T constraints
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

        // Step 2: Fill remaining with 'a' for lexicographically smallest
        for (char &c : s) {
            if (c == '?') c = 'a';
        }

        // Step 3: Fix F windows only if they accidentally became equal
        for (int i = 0; i < n; i++) {
            if (str1[i] == 'F') {
                bool same = true;
                for (int j = 0; j < m; j++) {
                    if (s[i + j] != str2[j]) {
                        same = false;
                        break;
                    }
                }

                if (!same) continue; // already different, good

                // Need to break this equality
                bool changed = false;
                for (int j = i + m - 1; j >= i; j--) {
                    if (!fixed[j]) {
                        for (char c = 'a'; c <= 'z'; c++) {
                            if (c != str2[j - i]) {
                                s[j] = c;
                                changed = true;
                                break;
                            }
                        }
                        break;
                    }
                }

                if (!changed) return "";
            }
        }

        // Final verification
        for (int i = 0; i < n; i++) {
            bool same = true;
            for (int j = 0; j < m; j++) {
                if (s[i + j] != str2[j]) {
                    same = false;
                    break;
                }
            }

            if (str1[i] == 'T' && !same) return "";
            if (str1[i] == 'F' && same) return "";
        }

        return s;
    }
};