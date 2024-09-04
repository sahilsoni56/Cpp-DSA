#include <iostream>
#include <cctype> // for isalnum() and tolower()
using namespace std;

int length(char ch[]) {
    int len = 0;
    while (ch[len] != '\0') {
        len++;
    }
    return len;
}

bool isPalindrome(char str[], int n) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        // Move start forward if non-alphanumeric
        while (start < end && !isalnum(str[start])) {
            start++;
        }
        // Move end backward if non-alphanumeric
        while (start < end && !isalnum(str[end])) {
            end--;
        }
        // Compare characters
        if (tolower(str[start]) != tolower(str[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char ch[100] = "my name is sahil soni";
    int n = length(ch);
    cout << "Length of the string: " << n << endl;
    cout << "Is palindrome: " << (isPalindrome(ch, n) ? "Yes" : "No") << endl;
    return 0;
}
