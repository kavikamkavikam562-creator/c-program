#include<stdio.h>
int main(){
    int attendance;
    int marks;
    scanf("%d",&attendance);
    scanf("%d",&marks);
    
    switch(marks||attendance){
        case 1:
          if(marks>=75){
            printf("Distintion");
            break;
          }
        case 2:
          if(marks>=50&&marks<=74){
            printf("Pass");
            break;
          }
        case 3:
          if(marks<50||attendance<75){
            printf("Fail");
            break;
          }
        default:
          printf("Invalid");
    }
    return 0;
}