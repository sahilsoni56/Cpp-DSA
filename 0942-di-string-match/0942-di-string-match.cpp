class Solution {
public:
    vector<int> diStringMatch(string s) {
        int left = 0;
        int n = s.length();
        int right = n;
        vector<int> result(n+1);
        for(int i =0 ; i<n;i++){
            if(s[i] == 'I'){
                result[i] = left++;
            }else{
                result[i] = right--;
            }
        }

        if(s[n] == 'I'){
                result[n] = left;
            }else{
                result[n] = right;
            }

        return result;
    }
};