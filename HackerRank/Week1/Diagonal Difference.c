#include <stdio.h>
#include <stdlib.h>

int diagonalDifference(int n, int matrix[100][100]) {
    int primary = 0;
    int secondary = 0;
    for (int i = 0; i < n; i++) {
        primary += matrix[i][i];
        secondary += matrix[i][n - 1 - i];
    }
    return abs(primary - secondary);
}
int main() {
    int n;
    scanf("%d", &n);
    int matrix[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int result = diagonalDifference(n, matrix);
    printf("%d\n", result);
    return 0;
}