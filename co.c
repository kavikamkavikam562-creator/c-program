#include<stdio.h>
int main(){
    int connectionType, type;
    int a,units;
    printf("Enter the connectionType:\n");
    printf("Domestic(1)\n");
    printf("Commercial(2)\n");
    scanf("%d",&connectionType);
    type=(connectionType==1||connectionType==2);
    printf("Enter the units:");
    scanf("%d",&units);
    a=(units>=1&&units<=1000);
    switch(connectionType){
        case(1):
          if(units<=100){
            int Bill;
            Bill=(units*3);
            printf("BILL=%d\n",Bill);
            break;
          }
          else {
            int Bill;
            Bill=(100*3)+((units-100)*5 );
            Bill = Bill-80;
            printf("BILL=%d\n",Bill);
            break;
          }
        case(2):
          if(units<=100){
            int Bill;
            Bill=(100*7);
            printf("%d\n",Bill);
            break;
          }
          else{
            int Bill;
            Bill=(100*7)+((units-100)*10);
            printf("BILL=%d\n",Bill);
            break;
          }
          default:
             printf("Invalid units");

    }
    return 0;

}
