#include<stdio.h>
int main(){
    int A;
    printf("Enter the number:");
    scanf("%d",&A);
    if(A>=10&&A<=20){
        printf("Number is within range");
    }
    else{
        printf("Not within range");
    }
    return 0;
}
