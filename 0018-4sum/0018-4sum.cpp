class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>> ans; // Set to store unique quadruplets

        for (int i = 0; i < n - 3; i++) {
            for (int j = i + 1; j < n - 2; j++) {  // Fixed loop condition
                int k = j + 1, l = n - 1;

                while (k < l) {  // Ensure `k < l`, not `k <= l`
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l]; // Prevent overflow

                    if (sum == target) {
                        ans.insert({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                    } else if (sum > target) {
                        l--;
                    } else {
                        k++;
                    }
                }
            }
        }

        return vector<vector<int>>(ans.begin(), ans.end()); // Convert set to vector
    }
};
