#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);

    int a[N];

    for(int i=0;i<N;i++)
        scanf("%d",&a[i]);

    int j = 0;   
    for(int i=0;i<N;i++)
    {
        if(a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }


    while(j < N)
    {
        a[j] = 0;
        j++;
    }


    for(int i=0;i<N;i++)
        printf("%d ",a[i]);

    return 0;
}