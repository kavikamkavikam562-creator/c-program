#include<stdio.h>
int main(){

    int N;
    scanf("%d",&N);
    int cust_id[100];
 
    
    for(int i=0;i<N;i++)
    { 
        scanf("%d",&cust_id[i]);
    }
    for(int i=0;i<N;i++){
      for(int j=i+1;j<N-1;j++){
        if(cust_id[i]==cust_id[j])
        {
          for(int k=j;k<N-1;k++)
          {
             cust_id[k]=cust_id[k+1];
          }
          N--;
          j--;
        }

      }
    
    }
    printf("After removing duplicates:");
    for(int i=0;i<N;i++)
    {
      printf(" %d",cust_id[i]);
    }
      return 0;
    }


