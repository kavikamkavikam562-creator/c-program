#include<stdio.h>
int sum(){
    int N,rem;
    int sum=0;
    printf("Enter the value: ");
    scanf("%d",&N);
    for(int i=N;i>0;i=i/10){
        rem=i%10;
        sum=sum+rem;
    }
    printf("%d",sum);
}
int main(){
    sum();
    return 0;
}