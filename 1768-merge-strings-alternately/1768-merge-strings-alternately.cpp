class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int i =0;
        int j =0;
        int n1=word1.length();
        int n2 = word2.length();
        while(i< n1 && j<n2){
            merged +=word1[i++];
            merged += word2[j++];
        }

        while(i<n1){
            merged +=word1[i++];
        }
        while(j<n2){
            merged +=word2[j++];
        }

        return merged;
    }
};