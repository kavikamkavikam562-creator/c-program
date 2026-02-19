#include<stdio.h>
int main(){
    int totalData =0;
    int N;
    int usage;
    int count;
    int i=1;
  
   

    scanf("%d",&totalData);
    scanf("%d",&N);
    count=0;

    while(i<=N){
        scanf("%d",&usage);
        if(usage<=totalData){
        totalData=totalData-usage;
        count++;
        }
        
        else{
            totalData=0;
        } 
        i++;
    }
        printf("Days used : %d\n",count);
        printf("Remaining Data : %d",totalData);

        return 0;
    
}