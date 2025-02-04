class Solution {
public:

     string sbstr(const string& s, int start, int len) {
        string result = "";
        for (int i = start; i < start + len && i < s.size(); i++) {
            result += s[i];
        }
        return result;
    }

    vector<int> findAnagrams(string s, string p) {
        vector<int> p_array(26,0);
        vector<int> s_array(26,0);
        vector<int> result;
        int k = p.size();
        int n = s.size();

        for(int i =0;i<p.length();i++){
            p_array[p[i] - 'a']++;
        }

        for(int i=0; i<= n-k ; i++){
            string sub = sbstr(s,i,k);
            fill(begin(s_array),end(s_array),0);

            for(char s: sub){
                s_array[s-'a']++;
            }

            bool anagram = true;
            for(int j =0 ;j<26 ; j++){
                if(p_array[j] != s_array[j]){
                    anagram =false;
                    break;
                }
            }

            if(anagram){
                result.push_back(i);
            }
        }
        return result;


    }
};