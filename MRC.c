#include<stdio.h>
int main(){
    int planType;
    int paymentMode;
    scanf("%d",&planType);
    scanf("%d",&paymentMode);
    switch(planType){
        case 1:
            if(paymentMode==(11)||(12)){
                printf("%d",199-20);
                break;
            }
        case 2:
            if(paymentMode==(11)||(12)){
                printf("%d",399-20);
                break;
            }
        default:
            printf("no cashback!");
    }
    return 0;
}