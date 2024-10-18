class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
     
        
        stack<int> st;
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (st.empty()) {
                st.push(nums[i]);
            } else {
                while (!st.empty() && st.top() <= nums[i]) {
                    st.pop();
                }

                st.push(nums[i]);
            }
        }

        for (int i = nums.size() - 1; i >= 0; i--) {
           
                while (!st.empty() && st.top() <= nums[i]) {
                    st.pop();
                }
                if (st.empty()) {
                    int a = nums[i];
                    nums[i] = -1;
                    st.push(a);

                } else {
                    int a = nums[i];
                    nums[i] = st.top();
                    st.push(a);
                }
            
        }
        return nums;
    }
};