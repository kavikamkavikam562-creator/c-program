#include<stdio.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int i,count=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            count++;
        }
    }
    printf("The number of spaces : %d",count);
}