#include <assert.h>
#include <0013_roman_int.c>

int main(void) {
    assert(romanToInt("III") == 3);
    assert(romanToInt("LVIII") == 58);
    assert(romanToInt("MCMXCIV") == 1994);
    return 0;
}
