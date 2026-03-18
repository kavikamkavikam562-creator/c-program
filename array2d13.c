#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c], count = 0;

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < r; i++) {
        int isPalindrome = 1;

        for(int j = 0; j < c / 2; j++) {
            if(a[i][j] != a[i][c - j - 1]) {
                isPalindrome = 0;
                break;
            }
        }

        if(isPalindrome)
            count++;
    }

    printf("%d", count);
    return 0;
}