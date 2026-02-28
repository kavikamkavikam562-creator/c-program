#include<stdio.h>
#include<string.h>
int main(){
    char str[60];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    int i=0;
    for(i=len-1;i>=0;i--){
        printf("%c",str[i]);
    }
    return 0;
}