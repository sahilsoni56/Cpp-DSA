class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int i =0 ;
        int j = 1;
        for(int c:nums){
            if(c > 0){
                ans[i] = c;
                
                    i +=2;
               
            }else{
                ans[j] = c;
               

                j +=2;
               
            }
        }
        return ans;


    }
};