#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution {
public:
    long long maximumSubarraySum(std::vector<int>& nums, int k) {
        if (k > nums.size()) {
            return 0; // Window size larger than array size, no valid subarray
        }

        std::unordered_map<int, int> freqMap;
        long long currentSum = 0;
        long long maxSum = 0;

        // Initialize the first window
        for (int i = 0; i < k; ++i) {
            freqMap[nums[i]]++;
            currentSum += nums[i];
        }

        // Check if the first window has all distinct elements
        if (freqMap.size() == k) {
            maxSum = currentSum;
        }

        // Slide the window across the array
        for (int i = k; i < nums.size(); ++i) {
            // Remove the element going out of the window
            int elementToRemove = nums[i - k];
            currentSum -= elementToRemove;
            freqMap[elementToRemove]--;
            if (freqMap[elementToRemove] == 0) {
                freqMap.erase(elementToRemove);
            }

            // Add the new element in the window
            int elementToAdd = nums[i];
            currentSum += elementToAdd;
            freqMap[elementToAdd]++;

            // Check if the current window has all distinct elements
            if (freqMap.size() == k) {
                maxSum = std::max(maxSum, currentSum);
            }
        }

        return maxSum;
    }
};
