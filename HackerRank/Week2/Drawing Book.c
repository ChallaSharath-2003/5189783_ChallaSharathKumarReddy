#include <stdio.h>

int main() {
    int n, p;
    scanf("%d", &n);
    scanf("%d", &p);
    int fromFront = p / 2;
    int fromBack = (n / 2) - (p / 2);
    int result = (fromFront < fromBack) ? fromFront : fromBack;

    printf("%d\n", result);
    return 0;
}