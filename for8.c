#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(;n!=0;n/=10){
        int a=0,b;
        b=n%10;
        a=a*10+b;
        printf("%d",a);
    }
    
    return 0;
}