#include <stdio.h>
#include <string.h>

int main() {
    int n, k;
    char s[105];

    scanf("%d", &n);
    scanf("%s", s);
    scanf("%d", &k);

    k = k % 26;

    for (int i = 0; i < n; i++) {
        char c = s[i];

        if (c >= 'a' && c <= 'z') { 
            c = ((c - 'a' + k) % 26) + 'a';
        } 
        else if (c >= 'A' && c <= 'Z') { 
            c = ((c - 'A' + k) % 26) + 'A';
        }

        printf("%c", c);
    }
    printf("\n");

    return 0;
}