#include<stdio.h>
int main(){
    char num;
    printf("Enter the number:");
    scanf("%c",&num);
    if(num>=48 && num<=57){
        printf("Digit");
    }
    else{
        printf("Not digit");
    }
}