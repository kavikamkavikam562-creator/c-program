#include<stdio.h>
int main(){
    char str[100];
    fgets(str,sizeof(str),stdin);
    int i=0;
    int count=0;
    while(str[i]!='\n')
    {
        if(str[i]>='95'&&str[i]<='112'){
             count++;
        }
        i++;
    }
    if(count<=1){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}