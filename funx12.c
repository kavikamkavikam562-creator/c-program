#include<stdio.h>
void leapYear(){
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if(((year%4==0)&&(year%100!=0))||(year%400==0)){
        printf("leap year");
    }
    else{
        printf("not leap year");
    }
}
int main(){
    leapYear();
    return 0;
}