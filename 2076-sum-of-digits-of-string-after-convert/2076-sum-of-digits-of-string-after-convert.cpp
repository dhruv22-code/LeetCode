class Solution {
public:
    int getLucky(string s, int k) {
        long long int sum = 0;
        vector<int> s1;
        for (int i = 0; i < s.length(); i++) {
            s1.push_back(s[i] - 'a' + 1);
            while (s1[i] > 0) {
                sum += (s1[i] % 10);
                s1[i] = s1[i] / 10;
            }
        }
        long long int sum1;
        if (k == 1)
            return sum;
        else {
            for (int i = 1; i < k; i++) {
                int ans = 0;
                while (sum > 0) {
                    ans += sum % 10;
                    sum = sum / 10;
                }
                sum = ans;
            }
            return sum;
        }
        return 0;
    }
}

;