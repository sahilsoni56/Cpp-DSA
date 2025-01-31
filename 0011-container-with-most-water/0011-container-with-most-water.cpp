class Solution {
public:
    int maxArea(vector<int>& height) {
        int n  = height.size();
        int i =0;
        int j = n-1;
        int max_area = INT_MIN;
        int temp_area  = INT_MIN;

        while(i<j){
            if(height[i] < height[j]){
                temp_area = height[i]*(j-i);
                i++; 
            }else{
                temp_area = height[j]*(j-i);
                j--;
            }

            max_area = max(temp_area,max_area);
        } 

        return max_area;
    }
};