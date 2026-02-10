#include<stdio.h>
int main(){
    int units;
    printf("Enter the units:");
    scanf("%d",&units);
    if(units==120){
        printf("Bill amount = Rs 600");
    }
    else{
        printf("Not vaild");
    }
}