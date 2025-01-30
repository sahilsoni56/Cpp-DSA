class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>> uniqueTriplets;  
        int n = nums.size();

        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; ++i){
            if(i > 0 && nums[i] == nums[i-1]){
                continue;
            }
            int target = -nums[i];
            int left =i+1;
            int right = n-1;
            while(left<right){
                int sum = nums[left] + nums[right];
                if(sum == target){
                    uniqueTriplets.insert({nums[i], nums[left], nums[right]});
                    ++left;
                    --right;
                }else if (sum < target) {
                    ++left;  
                } else {
                    --right;  
                }
            }
        }
return vector<vector<int>>(uniqueTriplets.begin(), uniqueTriplets.end());


    }
};