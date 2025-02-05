class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int count_subArray =0;
        int avg =0;
        int sum =0;


        for(int i =0; i< k ; i++){
            sum += arr[i];
        }
        avg = sum/k;
        if(avg >= threshold){
            count_subArray++;
        }

        for(int i = k ; i<arr.size();i++){
            sum = sum - arr[i-k] + arr[i];
            avg = sum/k;
            if(avg >= threshold){
                count_subArray++;
            }
        }
        return count_subArray;
    }
};