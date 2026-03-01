#include<stdio.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int i=0,count=0;
    while(str[i]!='\0'){
         if((str[i]>=48)&&(str[i]<=57)){
            count++;
         }     
         i++;                                  
    }
    printf("%d",count);
    return 0;
}