#include <assert.h>
#include <0009_palindrome_number.c>

int main(void) {
    assert(digit(123, 0) == 3);
    assert(digit(123, 1) == 2);
    assert(digit(123, 2) == 1);


    assert(isPalindrome(121));
    assert(!isPalindrome(-121));
    assert(!isPalindrome(10));

    assert(isPalindrome(0));
    assert(isPalindrome(12344321));
    return 0;
}
