#include<stdio.h>
int main(){
    int accountType;
    int balance;
    int withdrawalAmount;
    scanf("%d",&accountType);
    scanf("%d",&balance);
    scanf("%d",&withdrawalAmount);
    switch(accountType){
        case 1:
          if(balance>=withdrawalAmount){
            printf("Transaction Successful");
            break;
          }
          else{
            printf("Limit exceeded");
            break;
          }
        case 2:
          if(withdrawalAmount==5000){
            printf("Transcation Successful");
            break;
          }
          else{
            printf("Limit Exceeded");
            break;
          }
        default:
           printf("Invalid");
    }
    return 0;
}   
