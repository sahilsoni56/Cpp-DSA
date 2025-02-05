class Solution {
public:
    bool isVowel(char a) {
        return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
    }

    int maxVowels(string s, int k) {
        int count = 0, max_vowels = 0;

        // Count vowels in the first window
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i]))
                count++;
        }
        max_vowels = count;

        // Slide the window
        for (int i = k; i < s.size(); i++) {
            if (isVowel(s[i]))
                count++; // Add new character
            if (isVowel(s[i - k]))
                count--; // Remove leftmost character

            max_vowels = max(max_vowels, count);
        }

        return max_vowels;
    }
};
