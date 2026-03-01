#include<stdio.h>
float areaFunction(){
    int R;
    printf("Enter the value : ");
    scanf("%d",&R);
    float sum=3.14*R*R;
    return sum;
}
int main(){
    float result = areaFunction();
    printf("%.2f",result);
    return 0;

}