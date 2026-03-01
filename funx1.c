#include<stdio.h>
float calculateIntrest(){
    int P,R,T;
    printf("Enter the values : ");
    scanf("%d %d %d",&P,&R,&T);
    float sum=((P*R*T)/100);
    return sum;
}
int main(){
    float result=calculateIntrest();
    printf("%.2f",result);
    return 0;

}