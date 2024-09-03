class Solution {
public:
    int getLucky(string s, int k) {
        long long int sum = 0;
        
        for (int i = 0; i < s.length(); i++) {
            int s1 = s[i] - 'a' + 1;
            while (s1 > 0) {
                sum += (s1 % 10);
                s1 = s1 / 10;
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