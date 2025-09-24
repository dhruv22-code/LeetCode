class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0, high = arr.size() - 1, mid  = 0;
        while( low < high){
             mid = (low + high)/2;
            if(arr[mid] > arr[ mid + 1] && arr[mid] > arr[mid - 1]) break;
            else if(arr[mid] > arr[mid + 1]){
                high = mid;
            }else {
                low = mid;
            }
        }
        return mid;
    }
};