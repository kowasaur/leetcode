#include <assert.h>
#include <1524_odd_sub_arrays.c>

int main(void) {
    int nums1[] = {1, 3, 5};
    assert(numOfSubarrays(nums1, 3) == 4);

    int nums2[] = {2, 4, 6};
    assert(numOfSubarrays(nums2, 3) == 0);


    int nums3[] = {1, 2, 3, 4, 5, 6, 7};
    assert(numOfSubarrays(nums3, 7) == 16);

    int nums4[] = {3, 4, 9};
    assert(numOfSubarrays(nums4, 3) == 4);

    int nums5[] = {3, 4, 9, 2};
    assert(numOfSubarrays(nums5, 4) == 6);

    int nums6[] = {3, 4, 9, 6, 1};
    assert(numOfSubarrays(nums6, 5) == 9);


    return 0;
}
