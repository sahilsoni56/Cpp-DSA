class Solution {
public:

    int max_frq(vector<int> nums,unordered_map<int, int>& frq){
         
        int max_f =0;
        for(auto& pair:frq){
            max_f = max(max_f,pair.second);
        }
        return max_f;

    }
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> frq;
        for(int i:nums){
            frq[i]++;
        }
        int count =0;
        int maxi = max_frq(nums,frq);
       for(int i:nums){
            if(frq[i] == maxi ){
                count++;
            }
       }
       return count;

        
    }
};