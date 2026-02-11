#include<stdio.h>
int main(){
    int orderAmount;
    int speedType;
    scanf("%d",&orderAmount);
    scanf("%d",&speedType);
    int normal;
    normal=1;
    int express=2;
    switch(speedType){
        case 1:
          if(speedType==normal){
          printf("Delivery $50");
          break;
          }
        case 2:
          if(speedType==express){
            if(orderAmount<1000){
                printf("Delivery $100");
                break;
            }
          
          else if(orderAmount>=1000){
            printf("Delivery --> Free");
            break;
          }
        }
        default:
           printf("Invalid");
    }
    return 0;
}