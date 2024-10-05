class Solution {
public:
    vector<int> constructRectangle(int area) {
        int l = sqrt(area);
        int b = l;
        if(l * b == area)return {l, b};
        int b1 = b;
        while(b1 > 0 && area % b1 != 0){
            b1--;
        }
        return {area/b1 , b1};

    }
};