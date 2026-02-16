#include<stdio.h>
int main(){
    int t=3;
    for(int i=1;i<=4;i++){
        for(int j=1;j<i+1;j++) {
            printf("%d",j);
        }
        for(int s=1;s<=2*t;s++){
            printf(" ");
        }
        for(int k=i;k>0;k--){
            printf("%d",k);
        }
        printf("\n");
        t--;
    }
    return 0;
}