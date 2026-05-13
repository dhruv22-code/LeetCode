class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum=0; // store norml sum of the array
        int n=nums.size();
        int ans=0; // to store the max values of F(i) found so far i.e answer of this question
        for(int x:nums)
        {
            sum+=x; // sum of elements of the array
        }
        int total=0;
        for(int i=0;i<n;i++) // find F(0) i.e value as is without any rotation
        {
            total+= nums[i]*i;
        }
        ans=total;
        for(int i=1;i<nums.size();i++) // this is loop for rotations
        {
            total=total - nums[n-i]*(n-1);
            total+=sum-nums[n-i];
            ans=max(ans,total);
        }
        return ans;

   
    }
};