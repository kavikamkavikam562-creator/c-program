#include<stdio.h>
int main(){
    int accountType;
    int years;
    scanf("%d",&accountType);
    scanf("%d",&years);
    switch(accountType){
        case 1:
          if(accountType==1){
            printf("Interset 3%");
            break;
          }
        case 2:
          if(accountType==2){
            if(years<3){
                printf("Interset 5%");
                break;
            }
            else if(years>=3){
                printf("Interset 7%");
                break;
            }
        default:
            printf("Invalid");
          

          }
    }
}