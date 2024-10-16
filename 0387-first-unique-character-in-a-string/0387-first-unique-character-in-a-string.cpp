class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mapp;
        for(auto ch:s){
            mapp[ch]++;
        }
        for(int i =0 ; i<s.length();i++){
            if(mapp[s[i]]==1){
                return i;
            }
        }
        return -1;
        

    }
};