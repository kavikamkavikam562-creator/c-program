#include<stdio.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);

    int i=0,words=0;
    int space=0;
    while(str[i]!='\0')
    {
       if(str[i]==' ')
       {
        space++;
        words=space+1;
       }
       i++;
    }
    printf("The number of words are : %d",words);
    return 0;
    
}