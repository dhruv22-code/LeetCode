class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += fact(nums[i]);
        }
        return sum;
    }

    int fact(int num) {
        int count = 0, ret = 0;

        for (int i = 1; i * i <= num; i++) {
            if (num % i == 0) {
                if (i * i == num) {
                    count += 1;
                    ret += i;
                } else {
                    count += 2;
                    ret += i + num / i;
                }
            }
            if (count > 4) return 0;
        }

        if (count == 4) return ret;
        return 0;
    }
};
