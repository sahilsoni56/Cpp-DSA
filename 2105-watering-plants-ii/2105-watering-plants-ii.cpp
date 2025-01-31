class Solution {
public:


    int minimumRefill(vector<int>& plants, int capA, int capB) {
        int n = plants.size();
        int i =0;
        int j = n-1;
        int refill =0;
        int tankA = capA;
        int tankB = capB;
        while(i<j){
            if (plants[i] > tankA) {
                tankA = capA; 
                refill++;
            }
            tankA -= plants[i];
            i++;
           if (plants[j] > tankB) {
                tankB = capB;
                refill++;
            }
            tankB -= plants[j];
            j--;

        }
        if (i == j) {
            if (max(tankA, tankB) < plants[i]) {
                refill++; // Only refill if neither can water the plant
            }
        }

        return refill;
        
    }
};