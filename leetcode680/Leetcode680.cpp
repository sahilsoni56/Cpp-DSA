class Solution {
public:

    bool Check(string s , int i ,int j ){
        while(i<=j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i=0,j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                return Check(s,i+1,j) || Check(s,i,j-1);
            }else{
                i++;
                j--;
            }
        }
        return true;
    }
};