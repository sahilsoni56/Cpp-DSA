class Solution {
public:
    int nextGreaterElement(int n) {
        vector<int> digits;
        
        // Step 1: Extract digits and store in vector
        while (n != 0) {
            digits.push_back(n % 10);
            n /= 10;
        }
        
        // Reverse to get correct order
        reverse(digits.begin(), digits.end());
        
        int size = digits.size(), i, j;
        
        // Step 2: Find the first decreasing digit from the right
        for (i = size - 2; i >= 0; i--) {
            if (digits[i] < digits[i + 1]) {
                break;
            }
        }

        // If there is no next greater element, return -1
        if (i < 0) return -1;

        // Step 3: Find the smallest digit on the right which is larger than digits[i]
        for (j = size - 1; j > i; j--) {
            if (digits[j] > digits[i]) {
                break;
            }
        }

        // Step 4: Swap them
        swap(digits[i], digits[j]);

        // Step 5: Reverse the right portion to get the smallest next permutation
        reverse(digits.begin() + i + 1, digits.end());

        // Step 6: Convert vector back to integer
        long long ans = 0;
        for (int d : digits) {
            ans = ans * 10 + d;
            if (ans > INT_MAX) return -1;  // Overflow check during calculation
        }
        
        return (int)ans;
    }
};
