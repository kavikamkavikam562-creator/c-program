#include<stdio.h>
void palindrome(){
    int N,rem;
    printf("Enter the digit : ");
    scanf("%d",&N);
    int original=N;
    int sum=0;
    while(N!=0){
        rem=N%10;
        sum=sum*10+rem;
        N=N/10;
    
    }
    if(original==sum){
        printf("Palindrome");
    }
    else{
        printf("Not palidrome");
    }
}
int main(){
    palindrome();
}