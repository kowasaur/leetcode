#include <stdlib.h>

int posMin(int sum, int min) {
    if (sum > 0 && (min == -1 || sum < min)) {
        return sum;
    }
    return min;
}

int minimumSumSubarray(int* nums, int numsSize, int l, int r) {
    int sumsSize = numsSize - l + 1;
    int* sums = calloc(sumsSize, sizeof(int));
    int min = -1;

    for (int i = 0; i < sumsSize; i++) {
        for (int offset = 0; offset < l; offset++) {
            sums[i] += nums[i + offset];
        }
        min = posMin(sums[i], min);
    }

    // l = 2 -> offset = 1, but did first already
    for (int offset = l; offset < r; offset++) {
        for (int i = 0; i < numsSize - offset; i++) {
            sums[i] += nums[i + offset];
            min = posMin(sums[i], min);
        }
    }

    free(sums);
    return min;
}
