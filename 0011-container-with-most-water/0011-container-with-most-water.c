int maxArea(int* height, int heightSize) {
    int max = 0;
    int i = 0;
    int j = heightSize - 1;

    while (i < j) {
        int h = (height[i] < height[j]) ? height[i] : height[j]; 
        int area = (j - i) * h; 

        if (area > max) 
            max = area;

    
        if (height[i] < height[j])
            i++;
        else
            j--;
    }
    return max;
}
