#include<stdio.h>
int main(){

    int N;
    int K;
    scanf("%d",&N);
    int arr[N];
    int temp[N];
    
    for(int i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter K:");
    scanf("%d",&K);
    
    for(int i=0;i<K;i++)
    {
      temp[i]=arr[i];
     
    }
    for(int j=K;j<N;j++)
    {
       arr[j-K]=arr[j];
    }
    for(int i=0;i<K;i++)
    {
      arr[N-K+i]=temp[i];
    }
    for(int i=0;i<N;i++){
      printf("%d ",arr[i]);
    }
    return 0;
}