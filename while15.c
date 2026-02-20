#include<stdio.h>
int main(){
    int N;
    int per_day;
    int i=1;
    int count=0;
    int sum=0; 

    scanf("%d",&N);
    while(i<=N){
        scanf("%d",&per_day);
        sum=sum+per_day;
         
        if(per_day>4){
            count++;
        }
        i++;
    }
    printf("Total Overtime:%d\n",sum);
    printf("Burnout Days : %d",count);

    return 0;

}