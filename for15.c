#include<stdio.h>
int main(){
    int n;
    int a = 0;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        if((n%i==0)&&(n%1==0)){
           a++;
        }
    }
    printf("%d",a);
    return 0;
}