#include<stdio.h>
#include<ctype.h>
void main(){
    char str[50];
    char a;
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!='\0';i++){
        a=str[i];
        putchar(toupper(a));
       
    }
}
