#include<stdio.h>

int main(){

    int fuel;
    int N;
    int per_trip;
    int i=1;
    int count=0;
    int sum=0;
    int days=0;

    scanf("%d",&fuel);
    scanf("%d",&N);
    sum=fuel;

    
    while(i<=N){
        scanf("%d",&per_trip);
       
        
        if(sum>=per_trip){
            sum=sum-per_trip;
            count++;
        
        }
        else{
            break;
        }
        i++;
    }
    printf("Completed Trips : %d\n",count);
    printf("Remaining Fuel : %d",sum);

    return 0;
}