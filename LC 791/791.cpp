class Solution {
public:
    static string order; 

    static bool compare(char s1, char s2) {
        return (
            order.find(s1) < order.find(s2)  
        );
    }

    string customSortString(string order, string s) {
        Solution::order = order;  
        sort(s.begin(), s.end(), compare);  
        return s;
    }
};

string Solution::order; 
