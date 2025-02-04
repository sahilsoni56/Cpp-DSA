class Solution {
public:

    string substr(const string& s1 , int start , int len){
        string result = "";
        for(int i =start ; i<start+len && i<s1.size() ; i++){
            result += s1[i];

        }
        return result;
    }

    bool checkInclusion(string s1, string s2) {
        vector<int> a1(26,0);
        vector<int> a2(26,0);
        int n1 = s1.size();
        int n2 = s2.size();

        for(int i =0 ; i<n1 ; i++ ){
            a1[s1[i]-'a']++;
        }

        for(int i =0 ; i<n2 ; i++){
            string sub = substr(s2,i,n1);
            fill(begin(a2),end(a2),0);
            for(char ch :sub){
                a2[ch-'a']++;
            }
            bool answer = true;
            for(int j=0;j<26;j++){
                if( a1[j] != a2[j]){
                    answer = false;
                    break;
                }
            }

            if(answer){
                return true;
            }

        }

    return false;
    }
};