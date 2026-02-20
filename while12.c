#include<stdio.h>
int main()
{
    int N;
    int power_usage;
    int i=1;
    int count=0;
    int sum=0;
    
    scanf("%d",&N);
     
    while(i<=N)
    {
        scanf("%d",&power_usage);
        if(power_usage>sum)
        {
            sum=power_usage;
        }

        if(power_usage>5)
        {
          count++;
        }
        
        i++;
    }
    printf("Max Usage : %d\n",sum);
    
    printf("Surge Hours : %d",count);

    return 0;
}