#include<stdio.h>
int main(){
    int N;
    int status;
    int count_1=0;
    int count_2=0;
    int i=1;

    scanf("%d",&N);
    while(i<=N)
    {
        scanf("%d",&status);
        i++;
        if(status==1){
            count_1++;
        }
        else if(status==0){
            count_2++;
        }
       
    }
    
    printf("Successful : %d\n",count_1);
    printf("Cancelled : %d\n",count_2);
    if(count_1>=count_2){
        printf("Status : Safe");
    }
    else{
        printf("Status : Risk");

    }
    

    return 0;
}