class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i =0;
        int j=1;
        int n = nums.size();
        while(i<=n-1 && j<=n-1){
           if(nums[j]%2 == 0 &&  nums[i]%2 == 0){
            i=i+2;
           }else if(nums[j]%2 == 0 &&  nums[i]%2 != 0){
            swap(nums[i],nums[j]);
            j=j+2;
            if(i+2 <=n){
                j=i+2;
            }
           }else{
            j=j+2;
           }
        }
        return nums;
    }
};