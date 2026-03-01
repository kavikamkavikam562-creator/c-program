#include<stdio.h>
int factorial(){
    int N,fact=1;
    printf("Enter the value : ");
    scanf("%d",&N);
    for(int i=N;i>0;i--){
        fact=fact*i;
    }
    printf("%d",fact);
}
int main(){
    factorial();
    return 0;
}