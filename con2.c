#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);
    switch (mark/30)
    {
    case(1):
        if(mark>=91&&mark<=100){
            printf("Grade %d",mark);
             break;
         }
    case(2):
        if(mark>=81&&mark<=90){
        printf("Grade %d",mark);
        break;
        }
    case(3):
        if(mark>=71&&mark<=80){
        printf("Grade %d",mark);
        break;
        }
    case(4):
        if(mark>=61&&mark<=70){
        printf("Grade %d",mark);
        break;
        }
    case(5):
        if(mark>=51&&mark<=60){
        printf("Grade %d",mark);
        break;
        }
    case(6):
        if(mark>=41&&mark<=50){
        printf("Grade %d",mark);
        break;
        }
    case(7):
        if(mark>=31&&mark<=39){
         printf("Supplementary");
         break;
        }
    case(8):
        if(mark<=30){
        printf("Fail");
        break;
        }
    default:
     printf("Invalid");
        break;
    }
    return 0;
}
