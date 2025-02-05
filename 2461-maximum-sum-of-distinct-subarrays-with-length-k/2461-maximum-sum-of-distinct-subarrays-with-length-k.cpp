
class Solution {
public:
    long long maximumSubarraySum(std::vector<int>& nums, int k) {
        if (k > nums.size()) {
            return 0; 
        }

        unordered_map<int, int> freqMap;
        long long currentSum = 0;
        long long maxSum = 0;

        for (int i = 0; i < k; ++i) {
            freqMap[nums[i]]++;
            currentSum += nums[i];
        }

        if (freqMap.size() == k) {
            maxSum = currentSum;
        }

        for (int i = k; i < nums.size(); ++i) {
            int elementToRemove = nums[i - k];
            currentSum -= elementToRemove;
            freqMap[elementToRemove]--;
            if (freqMap[elementToRemove] == 0) {
                freqMap.erase(elementToRemove);
            }

            int elementToAdd = nums[i];
            currentSum += elementToAdd;
            freqMap[elementToAdd]++;

            if (freqMap.size() == k) {
                maxSum = std::max(maxSum, currentSum);
            }
        }

        return maxSum;
    }
};