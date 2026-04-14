class Solution {
public:
    bool isPrime(int num){
        if(num == 1)return false;
        for(int i = 2; i * i <= num; i++){
            if(num % i == 0)return false;
        }
        return true;
    }
    int minOperations(vector<int>& nums) {
        int ans = 0;
       for(int i = 0; i < nums.size(); i++){
        if(i % 2 == 0){
            while(!isPrime(nums[i])){nums[i]++;ans++;}
        }else{
            while(isPrime(nums[i])){nums[i]++;ans++;}
        }
       }
       return ans;
    }
};