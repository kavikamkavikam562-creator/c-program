#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int arr[N];
    int i;

    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    
    }

    int leaders[N];
    int count =0;
    int max = arr[N-1];
    leaders[count++]=max;
   

    for(int i=N-2;i>=0;i--){
      if(arr[i]>max){
         max=arr[i];
         leaders[count++]=max;
    }
}
    for(int i=count-1;i>=0;i--){
        printf("%d ",leaders[i]);
    }
    printf("%d",arr[N-1]);
return 0;
}