#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    int day_no[N];
    int count_1=0;
    int count_2=0;

    for(int i=0;i<N;i++)
    {
        scanf("%d",&day_no[i]);
        if(day_no[i]%2==0)
        {
            count_1++;  
        }
        else
        {
            count_2++;
        }  
   
    } 
    printf("Even:%d ",count_1);
    printf("Odd:%d ",count_2);
        
    

}