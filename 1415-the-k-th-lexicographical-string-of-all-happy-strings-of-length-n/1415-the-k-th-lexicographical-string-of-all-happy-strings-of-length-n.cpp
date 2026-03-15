class Solution {
public:
    string ans = "";

    void solve(int n, int &k, int i, string &s) {
        if (ans != "") return;

        if (n == 0) {
            k--;
            if (k == 0) ans = s;
            return;
        }

        if (i == -1 || s[i] != 'a') {
            s += 'a';                  // choose
            solve(n - 1, k, i + 1, s); // go
            s.pop_back();              // backtrack
        }

        if (i == -1 || s[i] != 'b') {
            s += 'b';
            solve(n - 1, k, i + 1, s);
            s.pop_back();
        }

        if (i == -1 || s[i] != 'c') {
            s += 'c';
            solve(n - 1, k, i + 1, s);
            s.pop_back();
        }
    }

    string getHappyString(int n, int k) {
        string s = "";
        solve(n, k, -1, s);
        return ans;
    }
};