class Solution {
public:
    void createMappig(string& str) {
        char start = 'a';
        char mapping[300] = {0};
        for (auto ch : str) {
            if (mapping[ch] == 0) {
                mapping[ch] = start;
                start++;
            }
        }
        for (int i = 0; i < str.length(); i++) {
            char ch = str[i];
            str[i] = mapping[ch];
        }
    }
    vector<string> findAndReplacePattern(vector<string>& words,string pattern) {
        vector<string> ans;
        createMappig(pattern);
        for(auto s : words){
            string temp = s;
            createMappig(temp);
            if(pattern == temp){
                ans.push_back(s);
            }
        }
        return ans;
    }
};