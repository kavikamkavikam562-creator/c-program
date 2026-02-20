#include<stdio.h>
int main(){

    int N;
    int delay;
    int i=1;
    int count=0;
    int sum=0;
    scanf("%d",&N);
 
    while(i<=N) 
    { 
        scanf("%d",&delay);
        sum=sum+delay;
        if(delay>2)
        {
           count++;

        }
        i++;
    }
    printf("Total Delay : %d\n",sum);
    printf("Delayed Days : %d",count);

}