class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and non-zero numbers ending in 0 cannot be palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + (x % 10);
            x /= 10;
        }

        // Check for even length (x == reversedHalf) and odd length (x == reversedHalf / 10)
        return x == reversedHalf || x == reversedHalf / 10;
    }
};
