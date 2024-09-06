class Solution {
public:
    int expand(string s ,int i ,int j ){
        int count =0;
        while( i>= 0 && j<s.length() && s[i] == s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }


    int countSubstrings(string s) {
        int totalcount =0;
        for(int count =0 ; count <s.size();count++){
            int oddans = expand(s,count,count);
            int evenans = expand(s,count,count+1);
            totalcount = oddans+evenans+totalcount;
        }
        return totalcount;
    }
};