#include<stdio.h>
void sumofnumbers(){
    int N;
    int sum=0;
    printf("Enter the number : ");
    scanf("%d",&N);
    for(int i=0;i<=N;i++){
        sum=sum+i; 
    }
    printf("%d",sum);
}
int main(){
    sumofnumbers();
    return 0;
}