#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int price[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&price[i]);
    }
    int min=-1;
    for(int i=0;i<N;i++)
    {
            if(price[i]>0){
               if(min==-1||price[i]<min){
                min=price[i];
               }
            }
    }
    if(min==-1)
    {
        printf("No positive");
    }
    else{
        printf("%d",min);
    }

    return 0;
}