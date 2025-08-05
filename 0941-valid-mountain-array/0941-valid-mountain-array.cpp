class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() < 3)return false;
        int i = 0;
        while(i < arr.size() - 1 ){
            if(arr[i + 1] == arr[i])return false;
            if(arr[i + 1] < arr[i]){
                break;
            }
            i++;
        }
        if(i == 0 || i >= arr.size() -1 )return false;
        while(i < arr.size() - 1){
            if(arr[i + 1] >= arr[i])return false;
            i++;
        }
        
        return true;
    }
};