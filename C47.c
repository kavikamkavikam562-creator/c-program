#include <stdio.h>
int main() {
    float per;
    printf("Enter percentage: ");
    scanf("%f", &per);

    if(per >= 95) printf("Grade A");
    else if(per >= 85) printf("Grade B");
    else if(per >= 75) printf("Grade C");
    else if(per >= 65) printf("Grade D");
    else if(per >= 45) printf("Grade E");
    else printf("Grade F");

    return 0;
}