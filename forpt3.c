#include <stdio.h>

int main() {
    int n, unit, sum = 0;

    scanf("%d", &n);   

    for(int i = 0; i < n; i++) {
        scanf("%d", &unit);
        sum += unit;
    }

    printf("Total Units: %d", sum);

    return 0;
}