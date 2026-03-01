#include<stdio.h>
void primeNumber(){
    int N,count=0;
    printf("Enter the number : ");
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        if(N%i==0){
            count++;
        }
    }
    if(count==2){
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
}
int main(){
    primeNumber();
    return 0;
}