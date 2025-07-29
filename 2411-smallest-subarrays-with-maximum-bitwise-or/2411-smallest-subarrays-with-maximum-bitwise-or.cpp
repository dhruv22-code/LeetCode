class Solution {
public:
    vector<int> smallestSubarrays(vector<int>& nums) {
        vector<vector<int>> temp(32);
        for(int i=0;i<nums.size();i++)
        {
            int hello=nums[i];
            int pos=0;
            while(hello>0)
            {
                if((1 & hello)!=0) temp[pos].push_back(i);
                hello>>=1;
                pos++;
            }
        }
        vector<int> ans(nums.size(),1);
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<32;j++)
            {
                if(temp[j].size()==0) continue;
                ans[i]=max(ans[i],temp[j][0]-i+1);
            }
            int hello=nums[i];
            int pos=0;
            while(hello>0)
            {
                if((1 & hello)!=0) temp[pos].erase(temp[pos].begin());
                hello>>=1;
                pos++;
            }
        }
        return ans;
    }
};