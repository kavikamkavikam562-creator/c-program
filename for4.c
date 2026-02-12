#include<stdio.h>
int main(){
    int n;
    int c;
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        c= n*i;   
        printf("%d \n",c);
    }
    return 0;
}