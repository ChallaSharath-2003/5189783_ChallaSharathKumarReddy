#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int socks[101] = {0};
    for (int i = 0; i < n; i++) {
        int color;
        scanf("%d", &color);
        socks[color]++;
    }
    int pairs = 0;
    for (int i = 0; i <= 100; i++) {
        pairs += socks[i] / 2;
    }
    printf("%d\n", pairs);
    return 0;
}