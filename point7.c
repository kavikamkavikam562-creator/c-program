#include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);

    char *start = str;
    char *end = str;
    while (*(end + 1) != '\0') end++;

    int flag = 1;
    while (start < end) {
        if (*start != *end) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if (flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}

