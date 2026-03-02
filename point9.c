#include <stdio.h>
int main() {
    int n, x;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) 
    scanf("%d", arr + i);
    scanf("%d", &x);

    int *p = arr;
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (*(p + i) == x) {
            pos = i + 1;
            break;
        }
    }
    printf("%d\n", pos);
    return 0;
}

