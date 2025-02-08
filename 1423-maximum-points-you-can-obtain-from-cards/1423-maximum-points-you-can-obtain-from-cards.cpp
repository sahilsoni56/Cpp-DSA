class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int maxsum =0;
        int temp =0;

        for(int i =0;i<k;i++){
            temp += cardPoints[i];
        }

        maxsum = temp;
        int size = cardPoints.size()-1;
        int rightindex =size;

        for(int i = k-1 ; i>=0 ;i--){
            temp -= cardPoints[i];
            temp += cardPoints[rightindex];
            rightindex--;
            maxsum = max(temp,maxsum);
        }

        return maxsum;

    }
};