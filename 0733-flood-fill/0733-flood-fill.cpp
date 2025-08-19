class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int color1 = image[sr][sc];
        image[sr][sc] = color;
        if(color1 == color)return image;
        help(image, sr, sc, color,color1 );
        return image;
    }
    void help(vector<vector<int>>&image, int sr, int sc , int color, int color1){
        if(sc + 1 < image[0].size() && image[sr][sc + 1] == color1){
            image[sr][sc + 1] = color;
            help(image, sr, sc + 1, color,color1 );
        }if(sc - 1 >= 0 && image[sr][sc - 1] == color1){
            image[sr][sc - 1] = color;
            help(image, sr, sc - 1, color,color1 );
        }if(sr + 1 < image.size() && image[sr + 1][sc] == color1){
            image[sr + 1][sc] = color;
             help(image, sr + 1, sc, color,color1 );
        }if(sr - 1 >= 0 && image[sr - 1][sc] == color1){
            image[sr - 1][sc] = color;
             help(image, sr - 1, sc, color,color1 );
        }
        return;
    }
};