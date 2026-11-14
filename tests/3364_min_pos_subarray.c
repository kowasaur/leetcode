#include <assert.h>
#include <string.h>
#include <3364_min_pos_subarray.c>

int main(void) {
    int nums1[] = {3, -2, 1, 4};
    assert(minimumSumSubarray(nums1, 4, 2, 3) == 1);

    int nums2[] = {-2, 2, -3, 1};
    assert(minimumSumSubarray(nums2, 4, 2, 3) == -1);

    int nums3[] = {1, 2, 3, 4};
    assert(minimumSumSubarray(nums3, 4, 2, 4) == 3);

    return 0;
}
