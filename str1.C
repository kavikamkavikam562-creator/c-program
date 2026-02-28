#include<stdio.h>
int main(){
    char str[20];
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(str[i]!='\n'){
        i++;
        
    }
    printf("%d",i);
 
}