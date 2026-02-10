#include<stdio.h>
int main(){
    int A,B;
    printf("Enter the numbers:");
    scanf("%d%d",&A,&B);
    A<B? printf("%d",A):printf("%d",B);
    return 0;
}