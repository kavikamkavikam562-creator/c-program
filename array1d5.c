#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    int roll[N];
    int sum=0;
    int act_sum=0;
    
    for(int i=0;i<N;i++)
    {
        scanf("%d",&roll[i]);
        sum=sum+roll[i];

    }
    for(int i=1;i<=N;i++)
    {
        act_sum=act_sum+i;
    }
    int total=act_sum-sum;
    printf("%d",total);

}