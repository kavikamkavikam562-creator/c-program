#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    fgets(str,sizeof(str),stdin);
    int len=strlen(str)-2;
    int i,j;
    char a[49];
    char b[40];
    for(i=0;i<len;i++)
    { 
       a[49]=str[i];
    }
    for(j=len;j>0;j--)
    {
      b[40]=str[j];
    }
    if(a[49]==b[40]){
      printf("Palindrome");
    }
    else{
      printf("Not palindrome");
    }
}