#include <stdio.h>
#include <string.h>
long long superDigit(long long x) {
    if (x < 10)
        return x;

    long long sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return superDigit(sum);
}

int main() {
    char n[100001];
    long long k;
    scanf("%s %lld", n, &k);
    long long sum = 0;
    for (int i = 0; i < strlen(n); i++) {
        sum += n[i] - '0';
    }
    long long result = superDigit(sum * k);
    printf("%lld\n", result);

    return 0;
}