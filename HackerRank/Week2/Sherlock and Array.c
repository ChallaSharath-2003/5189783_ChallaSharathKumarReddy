#include <stdio.h>

void balancedSums(int arr[], int n) {
    long long total = 0, leftSum = 0;

    for (int i = 0; i < n; i++) {
        total += arr[i];
    }

    for (int i = 0; i < n; i++) {
        long long rightSum = total - leftSum - arr[i];
        if (leftSum == rightSum) {
            printf("YES\n");
            return;
        }
        leftSum += arr[i];
    }
    printf("NO\n");
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int n;
        scanf("%d", &n);
        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        balancedSums(arr, n);
    }

    return 0;
}