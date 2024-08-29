class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       
        set<vector<int>> ansst;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int k = j + 1;
                set<long long int> st;
                 long long sum = nums[i] + nums[j];
                while (k < nums.size()) {
                    if (k > j + 1)
                        st.insert(nums[k - 1]);
               
                    sum += nums[k];
                    long long int rem = target - sum;
                    if (st.find(rem) != st.end()) {
                        
                       
                        vector<int> temp = {nums[i], nums[j], nums[k],(int)rem};
                        sort(temp.begin(), temp.end());
                        ansst.insert(temp);
                    }
                    sum -= nums[k];
                    k++;
                }
            }
        }
        vector<vector<int>> ans(ansst.begin(),ansst.end());
        return ans;
    }
};