#include <stdio.h>
#include <string.h>

void timeConversion(char *time) {
    int hour = (time[0] - '0') * 10 + (time[1] - '0');
    int isAM = (time[8] == 'A');
    if (isAM) {
        if (hour == 12) {
            hour = 0;
        }
    } else {
        if (hour != 12) {
            hour += 12;
        }
    }

    printf("%02d", hour);
    for (int i = 2; i < 8; i++) {
        putchar(time[i]);
    }
    printf("\n");
}

int main() {
    char input[11];
    scanf("%s", input);
    timeConversion(input);
    return 0;
}
