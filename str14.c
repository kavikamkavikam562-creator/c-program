#include<stdio.h>
int main(){
    char str[40];
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(i!='\n'){
        printf("%c",str[i]);
        i++;
    }
}