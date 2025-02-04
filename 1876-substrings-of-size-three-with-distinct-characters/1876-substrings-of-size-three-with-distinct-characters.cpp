#include <iostream>
#include <unordered_set>
using namespace std;

class Solution {
public:

    string substr(const string& s , int start , int length){
        string result = "";
        for(int i =start  ; i<start+length&&i<s.size(); i++){
            result +=s[i];
        }

        return result;
    }

    int countGoodSubstrings(string s) {
        if(s.size()<3) return 0;
        int count = 0;
        int k = 3;  

        for (int i = 0; i <= s.size() - k; i++) {
            string sub = substr(s,i, k);         
            unordered_set<char> uniq(sub.begin(), sub.end());  

            if (uniq.size() == 3) {              
                count++;
            }
        }

        return count;
    }
};


