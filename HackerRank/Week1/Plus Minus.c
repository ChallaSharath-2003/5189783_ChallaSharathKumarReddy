#include <stdio.h>

void plusMinus(int arr[], int size) {
    int positives = 0, negatives = 0, zeros = 0;

    // Loop to count positive, negative and zero numbers
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positives++;
        } else if (arr[i] < 0) {
            negatives++;
        } else {
            zeros++;
        }
    }

    // Calculate and print ratios with 6 decimal places
    printf("%.6f\n", (float)positives / size);
    printf("%.6f\n", (float)negatives / size);
    printf("%.6f\n", (float)zeros / size);
}

int main() {
    int n;
    scanf("%d", &n);

    int numbers[100];  // assuming n <= 100
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    plusMinus(numbers, n);

    return 0;
}