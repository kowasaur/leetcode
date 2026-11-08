#include <stdbool.h>
#include <math.h>

int digit(int x, int place) {
    return (int)(((double)x / pow(10, (double)place))) % 10;
}

bool isPalindrome(int x) {
    if (x <= 0) {
        return x == 0;
    }

    int digits = floor(log10(x)) + 1;

    for (int i = 0; i < digits/2; i++) {
        if (digit(x, i) != digit(x, digits-i-1)) {
            return false;
        }
    }

    return true;
}


