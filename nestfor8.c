#include<stdio.h>
int main(){
    for(int i=9;i>0;i-=2){
        for(int s=9;s>i;s-=2){
            printf(" ");
        }
        for(int j=0;j<i;j++){
            printf("*");
        }
         printf("\n");
    }
  
    return 0;
}

