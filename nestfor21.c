#include <stdio.h>

int main() {
    int size = 7;
    int center = size / 2;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int diff_i = i - center;
            if (diff_i < 0) diff_i = -diff_i;
            int diff_j = j - center;
            if (diff_j < 0) diff_j = -diff_j;
            int value = (diff_i > diff_j ? diff_i : diff_j) + 1;
            printf("%d ", value);
        }
        printf("\n");
    }
    return 0;
}