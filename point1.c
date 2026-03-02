#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    printf("Before swap: %d %d\n", a, b);

    int *p1 = &a, *p2 = &b;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("After swap: %d %d\n", a, b);
    return 0;
}

