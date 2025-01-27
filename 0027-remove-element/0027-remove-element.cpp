class Solution {
public:
   int removeElement(vector<int>& nums, int val) {
    int left = 0;
    int right = 0;  // right should start at 0, not 1
    int n = nums.size();
    
    while (right < n) {
        if (nums[right] != val) {
            nums[left] = nums[right];  // Move valid elements to the front
            left++;
        }
        right++;
    }
    
    return left;
}

};