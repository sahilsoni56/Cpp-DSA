class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int,int> mapy;

        for(auto& arr : nums1){
            mapy[arr[0]] = arr[1];
        }

        for(auto& arr:nums2){
            mapy[arr[0]] +=arr[1];
        }

        vector<vector<int>> result;

        for(auto& [key,value]:mapy){
            result.push_back({key,value});
        }

        sort(result.begin(),result.end());

        return result;
    }
};