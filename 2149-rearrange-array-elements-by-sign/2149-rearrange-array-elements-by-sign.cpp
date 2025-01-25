class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int s = nums.size();
        int pi =0 ;
        int ni = 1;
        vector<int> ans(s);
        for(int &num:nums){
            if(num < 0){
                ans[ni] = num;
                ni +=2;
            }else{
                 ans[pi] = num;
                 pi +=2;
            }
        }
        return ans;
    }
};