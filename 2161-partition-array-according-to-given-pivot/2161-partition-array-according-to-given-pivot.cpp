class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        vector<int> result;
        for(int c:nums){
            if(c<pivot){
                result.push_back(c);
            }
           
        }

        for(int c: nums){
            if(c == pivot){

            result.push_back(c);
            }
        }
        
        for(int c: nums){
            if(c>pivot){

            result.push_back(c);
            }
        }

        return result;
    }
};