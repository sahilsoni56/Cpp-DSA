class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        
        // Edge case: If there's only one element
        if (nums.size() == 1) {
            return nums[0];
        }
        
        // Binary search
        while (start < end) {
            int mid = start + (end - start) / 2;
            
            // Ensure we're not accessing out of bounds
            if (mid > 0 && nums[mid] != nums[mid-1] && mid < nums.size()-1 && nums[mid] != nums[mid+1]) {
                return nums[mid];
            }
            
            // Check whether the index is even or odd and compare with neighbors
            if (mid % 2 == 0) {
                if (nums[mid] == nums[mid+1]) {
                    start = mid + 2;  // Move right since the single element is beyond
                } else {
                    end = mid;  // Move left
                }
            } else {
                if (nums[mid] == nums[mid-1]) {
                    start = mid + 1;  // Move right
                } else {
                    end = mid - 1;  // Move left
                }
            }
        }
        
        // When start == end, we found the single element
        return nums[start];
    }
};
