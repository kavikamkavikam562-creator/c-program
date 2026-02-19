#include<stdio.h>
int main(){
    int N;
    int maxWeight;
    int passenger_weight;
    int i=1;
    int count=0;
    int sum=0;
    scanf("%d",&N);
    scanf("%d",&maxWeight);
    while(i<=N){
        scanf("%d",&passenger_weight);
        sum=sum+passenger_weight;
        if(sum<=maxWeight){
           count++;
        }
    
        i++;
    }
        printf("Passengers Allowed : %d\n",count);
      
        if(sum>maxWeight){
            printf("Overload : Yes");
        }
        else{
            printf("Overload : No");
        }
    
    
return 0;
    
}