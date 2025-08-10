#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* pangrams(char* s) {
    int alphabet[26] = {0};
    int i;

    for (i = 0; s[i] != '\0'; i++) {
        char ch = tolower(s[i]);
        if (ch >= 'a' && ch <= 'z') {
            alphabet[ch - 'a'] = 1;
        }
    }

    for (i = 0; i < 26; i++) {
        if (alphabet[i] == 0) {
            return "not pangram";
        }
    }

    return "pangram";
}

int main() {
    char s[1001];
    fgets(s, sizeof(s), stdin);
    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n') {
        s[len - 1] = '\0';
    }

    printf("%s\n", pangrams(s));
    return 0;
}