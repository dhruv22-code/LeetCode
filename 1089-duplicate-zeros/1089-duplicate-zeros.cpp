class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int count = 0;
        int i = 0;
        bool oneZeroOnly = false;

        // Step 1: Count how many elements would be in the array if we duplicated all zeros
        for (; i < arr.size(); i++) {
            if (arr[i] == 0) {
                if (count == arr.size() - 1) {
                    oneZeroOnly = true;
                    count++;
                    break;
                }
                count += 2;
            } else {
                count++;
            }
            if (count >= arr.size()) break;
        }

        int k = 1;
        for (int j = i; j >= 0; j--) {
            if (arr[j] != 0) {
                arr[arr.size() - k] = arr[j];
                k++;
            } else {
                if (oneZeroOnly && j == i) {
                    arr[arr.size() - k] = 0;
                    k++;
                } else {
                    arr[arr.size() - k] = 0;
                    arr[arr.size() - k - 1] = 0;
                    k += 2;
                }
            }
        }
    }
};
