#include<stdio.h>
void powerNumber(){
    int A,B;
    int power=1;
    printf("Enter the numbers : ");
    scanf("%d %d",&A,&B);
    for(int i=1;i<=B;i++){
       power=power*A;
    }
    printf("%d",power);
}
int main(){
    powerNumber();
    return 0;
}