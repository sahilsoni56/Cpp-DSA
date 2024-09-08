class Solution {
    
public:

    int reverse(int n) {
        int reverse = 0;
        int temp = n;
        while (temp != 0) {
            int last = temp % 10;
            reverse = reverse * 10 + last;
            temp = temp / 10;
        }
        return reverse;
    }

    bool sumOfNumberAndReverse(int num) {
        for (int i = 0; i <= num; i++) {
            int reversed_i = reverse(i);
            if (i + reversed_i == num) {
                return true;  // If the sum equals num, return true
            }
        }
        return false;
    }
};