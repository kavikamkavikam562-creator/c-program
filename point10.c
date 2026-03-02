#include <stdio.h>
int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    char *p = str;
    int count = 0, inWord = 0;

    while (*p != '\0') {
        if (*p != ' ' && *p != '\n') {
            if (!inWord) {
                count++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
        p++;
    }

    printf("%d\n", count);
    return 0;
}