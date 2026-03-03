#include<stdio.h>
void multipicationTable(){
    int N,table;
    printf("Enter the number : ");
    scanf("%d",&N);
    for(int i=1;i<=10;i++){
      table=N*i;
      printf("%d*%d=%d\n",N,i,table);
    }
}
int main(){
    multipicationTable();
    return 0;
}