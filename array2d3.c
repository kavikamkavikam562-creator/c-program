#include<stdio.h>
 int main(){
    
    int row;
    scanf("%d",&row);
    int column;
    scanf("%d",&column);
    int arr[row][column];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<column;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int maxunique=0;
    int maxindex=0;
    
    for(int i=0;i<row;i++)
    {
         int uniquecount=0;

         for(int k=0;k<column;k++)
         {
            int count=0;
            
                for(int l=0;l<column;k++)
                {
                    if(arr[i][k]==arr[i][l])
                    {
                       count++;
                    }
                }
                if(count==1)
                {
                        uniquecount++;
                }
            }
                if(uniquecount>maxunique)
                {
                    maxunique=uniquecount;
                    maxindex=i;

                }
            }
        
    printf("%d",maxindex);
    return 0;
}