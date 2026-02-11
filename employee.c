#include<stdio.h>
int main(){
    int  code;
    int experience;
    scanf("%d",&code);
    scanf("%d",&experience);
    switch(code){
        case 1:
         if(experience>=3){
            printf("%d",50000+(5000*experience));
            break;
         }
         else{
            printf("%d",(50,000));
            break;
         }
        case 2:
          if(experience>=3){
            printf("%d",40000+(5000*experience));
            break;
          }
          else{
            printf("%d",(35,000));
            break;
          }
        default:
           printf("Invalid Input,Try once again!");
    }
    return 0;
}