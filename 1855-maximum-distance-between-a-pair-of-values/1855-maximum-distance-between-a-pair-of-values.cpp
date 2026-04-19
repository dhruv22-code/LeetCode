class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int j = 0, ans = INT_MIN;
        for(int i = 0 ; i < nums1.size(); i++ ){
            if(j >= nums2.size())break;
            j = max(i, j);
            while(j < nums2.size() && nums1[i] <= nums2[j])j++;
            ans = max(ans, j  - i - 1);
        }
        return max(0, ans);
    }
};