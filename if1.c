#include<stdio.h>
int main(){
    int a,b,c,sum ;
    printf("Enter the sides:");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(sum==180){
        printf("Valid triangle");
    }
    else{
        printf("Invalid triangle");
    }
    return 0;
}