class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st; 

        for (char c : s) {
            if (!st.empty() && st.top().first == c) {
                
                if (st.top().second + 1 == k) {
                    st.pop(); 
                } else {
                    st.top().second++;
                }
            } else {
                
                st.push({c, 1});
            }
        }

        // Build the result string from the stack
        string result = "";
        while (!st.empty()) {
            result = string(st.top().second, st.top().first) + result;
            st.pop();
        }

        return result;
    }
};