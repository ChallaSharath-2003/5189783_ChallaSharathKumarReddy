#include <stdio.h>
#include <math.h>

long sumXor(long n) {
    if (n == 0) return 1;
    
    int unsetBits = 0;
    while (n > 0) {
        if ((n & 1) == 0)
            unsetBits++;
        n >>= 1;
    }
    
    return 1L << unsetBits;
}

int main() {
    long n;
    scanf("%ld", &n);
    printf("%ld\n", sumXor(n));
    return 0;
}