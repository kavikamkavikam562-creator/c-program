#include<stdio.h>
void evenOdd(){
    int N;
    printf("Enter the value : ");
    scanf("%d",&N);
    if((N%2==0)||(N==0))
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    
}
int main(){
    evenOdd();
    return 0;
}