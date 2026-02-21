#include<stdio.h>
int main(){
    int N;
    int count=0;
    scanf("%d",&N);
    int sales_array[N];
    for(int i=0;i<N;i++)
    {
      scanf("%d",&sales_array[i]);
    }
    for(int j=0;j<N;j++)
    {
        if(sales_array[j]<sales_array[j+1])
        {
           count++;
        }
    }
    if(count==N)
    {
        printf("Yes");
    }
    else
    {
       printf("No");
    }
    return 0;
}