#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev = 0;       
        int current = 1;    
        int sum = 0;       

        for (int i = 1; i < s.length(); i++) {
            if (s[i] == s[i - 1]) {
                current++;  
            } else {
                sum += min(prev, current); 
                prev = current;           
                current = 1;              
            }
        }

        sum += min(prev, current);

        return sum;
    }
};


