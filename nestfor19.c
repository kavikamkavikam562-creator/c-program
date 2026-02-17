#include <stdio.h>

int main() {
    int rows = 11;
    int cols = 11;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (i == 1 || i == 10 || (j >= 1 && j <= 4 && (i == 2 || i == 9)) ||
                (j >= 1 && j <= 3 && (i == 3 || i == 8)) ||
                (j >= 1 && j <= 2 && (i == 4 || i == 7)) ||
                ((j == 1 || j == 11) && (i == 5 || i == 6)) ||
                (j >= 8 && j <= 11 && (i == 2 || i == 9)) ||
                (j >= 9 && j <= 11 && (i == 3 || i == 8)) ||
                (j >= 10 && j <= 11 && (i == 4 || i == 7))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n"); 
    }

    return 0;
}