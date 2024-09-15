class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int>v;
        int low = 0;
        int high = height.size() -1;
        bs(low, high , height ,v, threshold);
        return v;
    }
    void bs(int low, int high , vector<int>&height, vector<int>&v, int t){
        if(low > high)return;
        int mid = (low + high)/2;
        if(mid - 1 >= 0 && height[mid - 1] >t )v.push_back(mid);
        bs(low, mid - 1 , height ,v, t);
        bs(mid + 1, high , height ,v, t);
        return;
    }

};