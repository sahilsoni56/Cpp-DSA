class Solution {
public:

    bool pali(vector<char> s , int i , int j ){
        while(i<j){
            if(s[i] != s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int check =1;
        vector<char> str;
        for(char ch:s){
            str.push_back(ch);
        }
        int n = str.size();
        int i =0;
        int j = n-1;
        while(i<j){
            if(str[i] == str[j]){
                i++;
                j--;
            }else{
                break;
            }
        }

        return pali(str,i,j-1) ||pali(str,i+1,j);



    }
};