#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the sides:");
    scanf("%d%d%d",&a,&b,&c);
    if((a==b&&a==c)&&(b==a&&b==c)){
        printf("Equilateral triangle");
    }
    else{
        printf("Invalid Triangle");
    }
}