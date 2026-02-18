#include<stdio.h>

int main(){
    int N;
    int initial_balance;
    int daily_trans;
    int Final_balance;
    scanf("%d",&N);
    scanf("%d",&initial_balance);
    int i=1;
    int sum,count;
    sum=0,count=0;
   
    while(i<=N){
        scanf("%d",&daily_trans);
        sum=sum+daily_trans;
        if(daily_trans>0&&daily_trans<2000){
            count+=1;
        }
        i++;
    }
    printf("%d\n",sum);

    Final_balance=initial_balance+sum;
    printf("Final balance : %d\n",Final_balance);
    printf("Low balance days : %d",count);

  
    return 0;
};