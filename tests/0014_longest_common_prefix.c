#include <assert.h>
#include <string.h>
#include <0014_longest_common_prefix.c>

int main(void) {
    char* strs1[] = {"flower", "flow", "flight"};
    assert(strcmp(longestCommonPrefix(strs1, 3), "fl") == 0);

    char* strs2[] = {"dog", "racecar", "car"};
    assert(strcmp(longestCommonPrefix(strs2, 3), "") == 0);
    return 0;
}
