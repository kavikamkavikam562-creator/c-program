#include<stdio.h>
int main(){

    int dataPackGB;
    int N;
    int daily_usage;
    int i=1;
    int count=0;
   
   
    int days=0;

    scanf("%d",&dataPackGB);
    scanf("%d",&N);
    int remaining =dataPackGB;
   

    while(i<=N)
    {
        scanf("%d",&daily_usage);

    
        
        remaining=remaining-daily_usage;

        if(remaining==0){
           days=i;
           count=0;
           break;

        }
        
        if(remaining<0){
           days=i;
           count-=remaining;
           break;
        }
        
        
        i++;
    }  
    if(remaining>0)
    {
        printf("Exhausted Days: Not exhausted\n");
    }
    printf("Exhausted Days :%d\n",days);
    
    printf("Overused Data : %d",count);
    
    return 0;
}