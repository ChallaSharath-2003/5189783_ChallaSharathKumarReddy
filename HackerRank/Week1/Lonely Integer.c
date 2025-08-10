#include <stdio.h>

int lonelyinteger(int a[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= a[i];
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int answer = lonelyinteger(a, n);
    printf("%d\n", answer);
    
    return 0;
}