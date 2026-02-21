#include<stdio.h>
int main(){

    int N;
    int temp;
    scanf("%d",&N);
    int stops_array[N];

    for(int i=0;i<N;i++)
    {
        scanf("%d",&stops_array[i]);
    }
    for(int i=0;i<N/2;i++)
    {
        temp=stops_array[i];
        stops_array[i] = stops_array[N-1-i];
        stops_array[N-1-i]=temp;
    }
    for(int i=0;i<N;i++)
    {
        printf("%d ",stops_array[i]);
    }
    
    return 0;
}