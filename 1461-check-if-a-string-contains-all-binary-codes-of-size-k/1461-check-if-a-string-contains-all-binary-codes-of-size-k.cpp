class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(s.size()<k){
            return false;
        }
        unordered_set<string> codes;         // To store unique binary substrings
        int total = 1 << k;                  // Total binary codes possible = 2^k

        for (int i = 0; i <= s.size() - k; i++) {
            string sub = s.substr(i, k);     // Extract substring of length k
            codes.insert(sub);               // Insert into set to ensure uniqueness

            if (codes.size() == total)       // Early exit if all codes are found
                return true;
        }

        return codes.size() == total;        // Final check after loop
    }
};
