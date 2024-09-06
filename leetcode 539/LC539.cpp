

class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        int n = timePoints.size();
        vector<int> arr;

        // Convert each time point to total minutes since midnight
        for (const string& timePoint : timePoints) {
            int hours = stoi(timePoint.substr(0, 2));
            int minutes = stoi(timePoint.substr(3, 2));
            int totalMinutes = hours * 60 + minutes;
            arr.push_back(totalMinutes);
        }
        
        // Sort the minutes array
        sort(arr.begin(), arr.end());

        // Initialize the minimum difference to a large value
        int minDiff = INT_MAX;

        // Compute the minimum difference
        for (int i = 0; i < n - 1; ++i) {
            minDiff = min(minDiff, arr[i + 1] - arr[i]);
        }

        // Add the difference between the last and the first time point considering the circular nature
        minDiff = min(minDiff, 1440 - arr.back() + arr.front());

        return minDiff;
    }
};

