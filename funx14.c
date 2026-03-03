#include<stdio.h>
void perfectNumber(){
    int N,sum=0;
    printf("Enter the number :");
    scanf("%d",&N);
    for(int i=1;i<=N/2;i++){
        if(N%i==0){
        sum=sum+i;  
        }
    }
    if(sum==N){
        printf("Perfect Number");
    }
    else{
        printf("Not perfect number");
    }
}
int main(){
    perfectNumber();
    return 0;
}