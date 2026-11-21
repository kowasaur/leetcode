#define MOD 1000000007

int numOfSubarrays(int* arr, int arrSize) {
    int total = 0;
    int sums[] = {0, 0};
    int sumsI = 0;
    int sumThis = 1;

    for (int i = 0; i < arrSize; i++) {
        if (arr[i] % 2) {
            total = (total + sumThis * sums[sumsI]) % MOD;
            sumsI = (sumsI + 1) % 2;
            sums[sumsI] += sumThis;
            sumThis = 1;
        } else {
            sumThis += 1;
        }
    }

    return (total + sumThis * sums[sumsI]) % MOD;
}
