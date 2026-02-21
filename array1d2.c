#include<stdio.h>
int main(){
    int N;
    int X;
    int count=0;
    scanf("%d",&N);
    int marks_array[N];
    for(int i=0;i<N;i++)
    {
      scanf("%d",&marks_array[i]);

    }
    printf("Enter the value of X:");
    scanf("%d",&X);
    for(int j=0;j<N;j++)
    {
      if(marks_array[j]==X){
        count++;
      }
      
    }
    printf("%d",count);
    return 0;
}