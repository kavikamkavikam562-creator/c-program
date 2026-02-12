#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a ,b=0;
    for(;n!=0;n/=10){
        a=n%10;
        if(a%2==0){
            b++;
        }
    }
    printf("%d",b);
    return 0;
}