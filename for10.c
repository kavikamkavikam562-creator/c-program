#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    if(1<=n){
        printf("%d ",a);
    }
    if(2<=n){
        printf("%d ",b);
    }
    for(int i=1;i<n;i++){
        int temp = a+b;
        a=b;
        b=temp;
        printf("%d ",temp);
    }
}