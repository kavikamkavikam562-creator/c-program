#include<stdio.h>
int main(){
    int class;
    int age;
    scanf("%d",&class);
    scanf("%d",&age);
    switch(class){
        case(1):
          if(age<12){
            printf("Fare %d",150);
            break;
          }
          else if(age>60){
            printf("Fare %d",200);
            break;
          }
        case(2):
        if(age>12){
            printf("%d",500);
            break;
        }
    }
     return 0;
}










    