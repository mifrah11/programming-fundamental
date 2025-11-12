#include <stdbool.h>

bool isPalindrome(int x) {
    // Negative numbers and numbers ending with 0 (but not 0 itself) are not palindromes
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;

    int reversedHalf = 0;

    // Reverse half of the number
    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }

    // Check for both even and odd length numbers
    return (x == reversedHalf) || (x == reversedHalf / 10);
}
