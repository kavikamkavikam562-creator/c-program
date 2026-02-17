#include<stdio.h>
int main(){
    for(int i=0;i<4;i++){
        for(int s=1;s<4-i;s++){
            printf(" ");
        } 
        for(int j=0;j<i+1;j++){
            printf("%c",65+j);
        }
        for(int k=i;k>0;k--){
            printf("%c",64+k);
        }
        printf("\n");
    }
    return 0;
}