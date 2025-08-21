#include <stdio.h>
#include <stdbool.h>
bool isPowerOfTwo(unsigned long long n) {
    return (n && !(n & (n - 1)));
}
unsigned long long largestPowerOfTwo(unsigned long long n) {
    unsigned long long p = 1ULL;
    while (p << 1ULL <= n) {
        p <<= 1ULL;
    }
    return p;
}

void counterGame(unsigned long long n) {
    int turn = 0;
    
    while (n > 1) {
        if (isPowerOfTwo(n)) {
            n >>= 1;
        } else {
            n -= largestPowerOfTwo(n);
        }
        turn ^= 1;
    }
    if (turn == 1) {
        printf("Louise\n");
    } else {
        printf("Richard\n");
    }
}
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        unsigned long long n;
        scanf("%llu", &n);
        counterGame(n);
    }
    return 0;
}