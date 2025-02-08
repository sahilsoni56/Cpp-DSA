class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        int n = nums.size();
        vector<int> result;
        vector<int> freq(101, 0);
        int offset = 50; // Shift range from [-50, 50] to [0, 100]

        // Initialize frequency array for the first window
        for (int i = 0; i < k; i++) {
            freq[nums[i] + offset]++;
        }

        // Function to find the x-th smallest element
        auto getKthSmallest = [&](int x) {
            int count = 0;
            for (int i = 0; i < 101; i++) {
                count += freq[i];
                if (count >= x) return i - offset; // Convert index back to number
            }
            return 0; // This case won't happen, but keeping it safe
        };

        // Compute the first window result
        int smallest = getKthSmallest(x);
        result.push_back(smallest < 0 ? smallest : 0);

        // Slide the window
        for (int i = k; i < n; i++) {
            freq[nums[i] + offset]++;        // Add new element
            freq[nums[i - k] + offset]--;    // Remove outgoing element
            
            smallest = getKthSmallest(x);
            result.push_back(smallest < 0 ? smallest : 0); // Only store negatives
        }

        return result;
    }
};
