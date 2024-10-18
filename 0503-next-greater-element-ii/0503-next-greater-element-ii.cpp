class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> nums1(nums);
        for (int i = 0; i < nums.size() ; i++) {
            nums1.push_back(nums[i]);
        }
        stack<int> st;
        for (int i = nums1.size() - 1; i >= nums.size(); i--) {
            if (st.empty()) {
                st.push(nums1[i]);
            } else {
                while (!st.empty() && st.top() <= nums1[i]) {
                    st.pop();
                }

                st.push(nums1[i]);
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