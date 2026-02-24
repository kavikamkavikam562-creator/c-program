#include <stdio.h>

int main() {
    int n, target;
    
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &target);

    int found = 0;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] + a[j] == target) {
                printf("Pair: %d %d", a[i], a[j]);
                found = 1;
                break;
            }
        }
        if(found) break;
    }

    if(!found)
        printf("No pair");

    return 0;
}