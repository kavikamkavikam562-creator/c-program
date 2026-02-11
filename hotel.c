#include<stdio.h>
int main(){
    int roomType;
    char season;
    scanf("%d",&roomType);
    scanf("%c",&season);
    switch(roomType){
        case 1:
          if(season=='A'){
            printf("$2500");
            break;
          }
          else if(season=='B'){
            printf("$2000");
            break;
          }
        case 2:
         if(season=='C'){
            printf("$4000");
            break;
         }
         else if(season=='D'){
            printf("$3000");
            break;
         }
        default:
         printf("Invalid Input");

    }
    return 0;

}