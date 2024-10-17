class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int i=0;
        int j = height.size()-1;
        while(i<j){
            int min_h = min(height[i],height[j]);
            int w = j-i;
            max_water = max(max_water,(min_h*w));
            if(height[i]<height[j] || height[i] == height[j]){
                i++;
            }else if(height[i]>height[j]){
                j--;
            }
        }
        return max_water;
    }
};