#include<stdio.h>
int main(){

    int ATMcash;
    int N;
    int withdrawal;
    int i=1;
    int count_1=0;
    int a;

    scanf("%d",&ATMcash);
    scanf("%d",&N);
    int remaining=ATMcash;
    while(i<=N){
       scanf("%d",&withdrawal);
       remaining=remaining-withdrawal;
       
    
       if(remaining>0)
       {
         count_1++;
         
        }
      
       i++;
       
    }

    printf("Successful Withdrawal: %d\n",count_1);
    if(remaining<0){
    printf("Remaining Cash: %d",-remaining);
    }
    else{
        printf("Remaining Cash: %d",remaining);
    }
}