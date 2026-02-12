#include<stdio.h>
int main(){
    int n , m , sum = 0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=n;i<=m;i++){
         if(i%n==0){
            sum = sum+i;
         }
    }
    printf("%d",sum);
    return 0;
}