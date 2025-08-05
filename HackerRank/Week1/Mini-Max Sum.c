#include <stdio.h>

void miniMaxSum(int arr[], int size) {
    long total = 0;
    int smallest = arr[0];
    int largest = arr[0];

    for (int i = 0; i < size; i++) {
        total += arr[i];

        if (arr[i] < smallest) {
            smallest = arr[i];
        }

        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    long minSum = total - largest;
    long maxSum = total - smallest;

    printf("%ld %ld\n", minSum, maxSum);
}

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    miniMaxSum(arr, 5);

    return 0;
}