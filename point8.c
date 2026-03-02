#include <stdio.h>
int main() {
    char s1[100], s2[100];
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    char *p1 = s1;
    while (*p1 != '\0' && *p1 != '\n') p1++;  // move to end of s1

    char *p2 = s2;
    while (*p2 != '\0') {
        if (*p2 != '\n') {
            *p1 = *p2;
            p1++;
        }
        p2++;
    }
    *p1 = '\0';

    printf("%s\n", s1);
    return 0;
}