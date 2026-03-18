#include <stdio.h>

int isPrime(int n) {
    if(n < 2) return 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c], count = 0;

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(isPrime(a[i][j]))
                count++;
        }
    }

    printf("%d", count);
    return 0;
}