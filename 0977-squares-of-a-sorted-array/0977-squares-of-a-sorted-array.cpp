class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> empty(n);
        int left = 0;
    int right = n - 1;
    int e = n - 1;

    for (int i = 0; i < n; i++) {
        nums[i] = nums[i] * nums[i];
    }

    // Sort squares in ascending order
    while (left <= right) {
        if (nums[left] > nums[right] || nums[left] == nums[right]) {
            empty[e] = nums[left];
            left++;
        } else {
            empty[e] = nums[right];
            right--;
        }
        e--;
    }

    return empty;
    }
};