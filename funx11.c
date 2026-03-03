#include<stdio.h>
void countDigits(){
    int N;
    int count=0;
    printf("Enter the numbers : ");
    scanf("%d",&N);
    while(N!=0){
        N=N/10;
        count++;  
    }
    printf("%d",count);
}
int main(){
    countDigits();
    return 0;
}