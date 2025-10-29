class Solution {
public:
    int smallestNumber(int n) {
        int len = to_string(n).length();
        unsigned long long ans = (1ULL << len) - 1; 
        return ans;
    }
};
