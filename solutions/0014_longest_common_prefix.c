#include <stdbool.h>
#include <stdlib.h>

bool allMatch(char** strs, int strsSize, int i) {
    char* first = strs[0];
    for (int j = 1; j < strsSize; j++) {
        if (first[i] != strs[j][i]) {
            return false;
        }
    }
    return true;
}

char* longestCommonPrefix(char** strs, int strsSize) {
    char* first = strs[0];
    int i = 0;
    for (; first[i]; i++) {
        if (!allMatch(strs, strsSize, i)) {
            break;
        }
    }
    i++;
    char* result = malloc(i * sizeof(char));
    memcpy(result, first, i);
    result[i-1] = '\0';
    return result;
}
