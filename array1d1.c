#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    int salary_array[N];
    int second_largest=0;
    int largest=0;
   

    for(int i=0;i<N;i++)
    {
        scanf("%d",&salary_array[i]);
    }
    for(int j=0;j<N;j++)
    {
        if(salary_array[j]>salary_array[j+1])
        {
           second_largest=salary_array[j];
           
           
        }
        
    }
  
    for(int k=0;k<N;k++)
    {
       if(second_largest<salary_array[k])
       {
         largest=salary_array[k];
         break;
       }
    }
    if(second_largest<largest){
        printf("%d",second_largest);
    }
    
     return 0;
}