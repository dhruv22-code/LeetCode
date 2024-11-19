class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        int sum = 0;
        vector<int> code1(n, 0);
        if (k > 0) {
            for (int i = 0; i < n; i++) {

                for (int count = 0; count < k; count++) {
                    sum += code[(i + 1 + count) % n];
                }
                code1[i] = sum;
                sum = 0;
            }
        } else {
            reverse(code.begin(), code.end());
            k = -k;
            for (int i = n - 1; i >= 0; i--) {
                for (int count = 0; count < k; count++) {
                    sum += code[(i + 1 + count) % n];
                }
                code1[n - i - 1] = sum;
                sum = 0;
            }
        }

        return code1;
    }
};