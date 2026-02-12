#include<stdio.h>
int main(){
    int n,p,x=1;
    scanf("%d",&n);
    scanf("%d",&p);
    if(p==0){
        printf("%d",1);
    }
    for (int i = 1;i <= p ;i++){
        x=x*n;
    }
    printf("%d",x);
    return 0;
}