class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int Pickp =0;
        int Pickg=0;
        int Pickm=0;

        int travelp=0;
        int travelm=0;
        int travelg=0;

        int lastp=0;
        int lastg=0;
        int lastm=0;

        int index=0;
        for(auto s:garbage){
            for(auto ch : s){
                if(ch == 'P'){
                    Pickp++;
                    lastp =index;
                }else if(ch=='M'){
                    Pickm++;
                    lastm=index;
                }else {
                    Pickg++;
                    lastg = index;
                }
            }
            index++;
        }

        for(int i =0 ;i<lastp;i++){
            travelp += travel[i];
        }
        
        for(int i =0 ;i<lastm;i++){
            travelm += travel[i];
        }
        
        for(int i =0 ;i<lastg;i++){
            travelg += travel[i];
        }

        int ans = (Pickp + travelp) + (Pickg + travelg) + (Pickm + travelm);
        return ans;

    }
};