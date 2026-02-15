#include<stdio.h>
int main(){
    int battery_percentage,sum=0;
    int used_hrs;
    int drain_per_hr;
    int remain_battery;
    scanf("%d",&battery_percentage);
    scanf("%d",&used_hrs);
    for( int i=1;i<=used_hrs;i++){
        scanf("%d",&drain_per_hr);
        sum=sum+drain_per_hr;
        remain_battery=battery_percentage-sum;

    }
    printf("Remaining battery:""%d",&remain_battery);
    return 0;
}