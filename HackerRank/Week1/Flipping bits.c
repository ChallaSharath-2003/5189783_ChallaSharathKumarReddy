#include <stdio.h>

unsigned int flippingBits(unsigned int n) {
    unsigned int mask = 4294967295;
    return n ^ mask;
}

int main() {
    int q;
    scanf("%d", &q);

    for (int i = 0; i < q; i++) {
        unsigned int n;
        scanf("%u", &n);

        unsigned int result = flippingBits(n);
        printf("%u\n", result);
    }

    return 0;
}