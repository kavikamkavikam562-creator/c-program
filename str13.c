#include<stdio.h>
int main(){
    char a,str[50];
    fgets(str,sizeof(str),stdin);
    int i=0;
    printf("Enter the character:\n");
    scanf(" %c",&a);
    while(str[i] !='\0'){
        if(str[i]==a){
            printf("%d",i);
            return 0;
        }
        i++;
    }  
    printf("-1");
    return 0;
}