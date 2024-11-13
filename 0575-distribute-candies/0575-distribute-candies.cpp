class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int count = 0;
        sort(candyType.begin(), candyType.end());
        for (int i = 0; i < candyType.size() ; i++) {
            while (i < candyType.size() - 1 && candyType[i] == candyType[i + 1]) {
                i++;
                
            }
            count++;
          
        }
        return candyType.size() / 2 > count ?  count : candyType.size() / 2;
    }
};