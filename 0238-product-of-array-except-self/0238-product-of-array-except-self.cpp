class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size(); 
        vector<int> ans(n,1);
        
        for(int i =1 ;i<n;i++){
            ans[i] = nums[i-1]*ans[i-1];
        }
        int suffix =1;
        for(int i =n-2 ;i>=0;i--){
            suffix  *= nums[i+1];
            ans[i] = ans[i]*suffix;
        }

        // for(int i= 0 ;i<n ; i++){
        //     ans[i] = prefix[i]*suffix[i];
        // }
        return ans;
    }
};