class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int n =nums.size() ;
        if(n==1){
            return nums;
        }

        int i =0 ;
        int j =n-1;

        while(i<=j){
            if(nums[i]%2 == 0 && nums[j]%2==0){
                i++;
            }else if(nums[i]%2 != 0 && nums[j]%2 ==0){
                swap(nums[i++],nums[j--]);

            }else if(nums[i]%2 == 0 && nums[j]%2 !=0){
                    i++;
                    j--;
            }else{
                j--;
            }
        }
        return nums;

    }
};