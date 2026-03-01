#include<stdio.h>
void largestNumber(){
    int A,B;
    printf("Enter the values: ");
    scanf("%d %d",&A,&B);
    if(A>B){
        printf("%d",A);
    }
    else if(B>A){
        printf("%d",B);
    }
    else if(A==B){
        printf("%d",A);
    }
}
int main(){
    largestNumber();
    return 0;
}