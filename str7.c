#include<stdio.h>
int main(){
    char str[50];
    scanf("%s",&str);
    int i=0;
    int count=0;
    while (str[i]!='\0')
    {
        if(str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'&&
            str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}