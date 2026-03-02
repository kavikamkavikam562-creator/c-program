#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", arr + i);

    int sum = 0;
    int *p = arr;
    for (int i = 0; i < n; i++) sum += *(p + i);

    printf("%d\n", sum);
    return 0;
}

