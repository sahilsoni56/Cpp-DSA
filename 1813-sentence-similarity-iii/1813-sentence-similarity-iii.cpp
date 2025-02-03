#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> convert(string s) {
        vector<string> ans;
        string word = "";
        for (char c : s) {
            if (c == ' ') {
                if (!word.empty()) {
                    ans.push_back(word);
                    word = "";
                }
            } else {
                word += c;
            }
        }
        if (!word.empty()) {
            ans.push_back(word);
        }
        return ans;
    }

    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> s1 = convert(sentence1);
        vector<string> s2 = convert(sentence2);

        int n1 = s1.size();
        int n2 = s2.size();

        // Ensure s1 is always the longer sentence
        if (n1 < n2) {
            swap(s1, s2);
            swap(n1, n2);
        }

        int i = 0, j = 0;

        // Compare from the start (prefix)
        while (i < n2 && s1[i] == s2[i]) {
            i++;
        }

        // Compare from the end (suffix)
        while (j < n2 - i && s1[n1 - 1 - j] == s2[n2 - 1 - j]) {
            j++;
        }

        // Check if the total matched words cover the entire shorter sentence
        return (i + j == n2);
    }
};
